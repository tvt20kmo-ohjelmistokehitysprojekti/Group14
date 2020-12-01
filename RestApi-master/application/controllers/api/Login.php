<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Login extends CI_Controller {
    public function check_login(){
        $this->load->model('Pankkikortti_model');
        $kortti=$this->input->get('numero');
        $plaintext_pin=$this->input->get('pin');
        $encrypted_pin=$this->login_model->check_login($numero);

        if(password_verify($plaintext_pin,$encrypted_pin)){
          $result=true;
        }
        else{
          $result=false;
        }
        echo json_encode($result);
    }
}
