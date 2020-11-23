<?php

class Login_model extends CI_model
{
  function check_login($kortti){
    $this->db->select('pin');
    $this->db->from('kortti');
    $this->db->where('kortti', $kortti);
    return $this->db->get()->row('pin');
  }
}
