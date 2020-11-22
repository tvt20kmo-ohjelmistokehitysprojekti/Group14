<?php
/**
 *
 */
class pankkikortti_model extends CI_model
{
  function get_pankkikortti($id){
    $this->db->select('*');
    $this->db->from('pankkikortti');
    if($id !== NULL) {
      $this->db->where('idpankkikortti',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_pankkikortti($add_data){
    $this->db->insert('pankkikortti',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id();
    }
    else {
      return FALSE;
    }
  }
  function update_pankkikortti($id, $update_data){
    $this->db->where('idpankkikortti',$id);
    $this->db->update('pankikortti',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  function delete_pankkikortti($id){
    $this->db->where('idpankkikortti',$id);
    $this->db->delete('pankkikortti');
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

}
