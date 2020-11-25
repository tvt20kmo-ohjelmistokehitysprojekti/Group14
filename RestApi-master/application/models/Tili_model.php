<?php
/**
 *
 */
class Tili_model extends CI_model
{
  function get_tili($id){
    $this->db->select('*');
    $this->db->from('tili');
    if($id !== NULL) {
      $this->db->where('idtili',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_tili($add_data){
    $this->db->insert('tili',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id();
    }
    else {
      return FALSE;
    }
  }
  function update_tili($id, $update_data){
    $this->db->where('idtili',$id);
    $this->db->update('tili',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  function delete_tili($id){
    $this->db->where('idtili',$id);
    $this->db->delete('tili');
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

}
