<?php
/**
 *
 */
class Tapahtumat_model extends CI_model
{
  function get_tapahtumat($id){
    $this->db->select('*');
    $this->db->from('tapahtumat');
    if($id !== NULL) {
      $this->db->where('idtapahtumat',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_tapahtumat($add_data){
    $this->db->insert('tapahtumat',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id();
    }
    else {
      return FALSE;
    }
  }
  function update_tapahtumat($id, $update_data){
    $this->db->where('idtapahtumat',$id);
    $this->db->update('tapahtumat',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  function delete_tapahtumat($id){
    $this->db->where('idtapahtumat',$id);
    $this->db->delete('tapahtumat');
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

}
