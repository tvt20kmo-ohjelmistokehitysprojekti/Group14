<?php

defined('BASEPATH') OR exit('No direct script access allowed');

// This can be removed if you use __autoload() in config.php OR use Modular Extensions
/** @noinspection PhpIncludeInspection */
require APPPATH . 'libraries/REST_Controller.php';

/**
 * This is an example of a RestApi based on PHP and CodeIgniter 3.
 *
 *
 * @package         CodeIgniter
 * @subpackage      Rest Server
 * @category        Controller
 * @author          Pekka Alaluukas (edited the version made by Phil Sturgeon & Chris Kacerguis)
 * @license         MIT
 * @link            https://github.com/chriskacerguis/codeigniter-restserver
 */
class Tapahtumat extends REST_Controller {

    function __construct()
    {
        //enable cors
        header('Access-Control-Allow-Origin: *');
        header("Access-Control-Allow-Methods: GET, POST, OPTIONS, PUT, DELETE");
        // Construct the parent class
        parent::__construct();

        $this->load->model('Tapahtumat_model');
    }

    public function index_get()
    {
        // user from a data store e.g. database

        $id = $this->input->get('id');

        // If the id parameter doesn't exist return all users
        if ($id === NULL)
        {
            $tapahtumat=$this->Tapahtumat_model->get_tapahtumat(NULL);
            // Check if the user data store contains user (in case the database result returns NULL)
            if ($tapahtumat)
            {
                // Set the response and exit
                $this->response($tapahtumat, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                // Set the response and exit
                $this->response([
                    'status' => FALSE,
                    'message' => 'No tapahtumat were found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        }

         // Find and return a single record for a particular user.
        else {
            // Validate the id.
            if ($id <= 0)
            {
                // Invalid id, set the response and exit.
                $this->response(NULL, REST_Controller::HTTP_BAD_REQUEST); // BAD_REQUEST (400) being the HTTP response code
            }

            // Get the user from the database, using the id as key for retrieval.
            $user=$this->Tapahtumat_model->get_tapahtumat($id);
            if (!empty($tapahtumat))
            {
                $this->set_response($tapahtumat, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                $this->set_response([
                    'status' => FALSE,
                    'message' => 'user could not be found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        }

    }

    public function index_post()
    {
        // Add a new book
        $add_data=array(
          'pvm'=>$this->post('pvm'),
		'paikka'=>$this->post('paikka'),
          'summa'=>$this->post('summa'),
        );
        $insert_id=$this->Tapahtumat_model->add_tapahtumat($add_data);
        if($insert_id)
        {
            $message = [
                'idtapahtumat' => $insert_id,
                'pvm' => $this->post('pvm'),
                'paikka' => $this->post('paikka'),
		'summa' => $this->post('summa'),
                'message' => 'Added a resource'
            ];
            $this->set_response($message, REST_Controller::HTTP_CREATED); // CREATED (201) being the HTTP response code
        }
        else
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not add data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }

    }
    public function index_put()
    {
        // Update the book
        $id=$this->input->get('id');
        $update_data=array(
	'pvm' => $this->get('pvm'),
        'paikka' => $this->get('paikka'),
	'summa' => $this->get('summa')
        );
        $result=$this->Tapahtumat_model->update_tapahtumat($id, $update_data);

        if($result)
        {
            $message = [
                'idtapahtumat' => $id,
                'pvm' => $this->put('pvm'),
                'paikka'=>$this->put('paikka'),
		'summa'=>$this->put('summa'),
                'message' => 'Updates a resource'
            ];

            $this->set_response($message, REST_Controller::HTTP_CREATED); // CREATED (201) being the HTTP response code
        }
        else 
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not update data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }
    }

    public function index_delete()
    {
        $id = $this->input->get('id');

        // Validate the id.
        if ($id <= 0)
        {
            // Set the response and exit
            $this->response(NULL, REST_Controller::HTTP_BAD_REQUEST); // BAD_REQUEST (400) being the HTTP response code
        }
        $result=$this->Tapahtumat_model->delete_tapahtumat($id);
        if ($result)
        {
          $message = [
              'idtapahtumat' => $id,
              'message' => 'Deleted the resource'
          ];
          $this->set_response($message, REST_Controller::HTTP_OK);
        }
        else
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not delete data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }
    }



}
    
    

