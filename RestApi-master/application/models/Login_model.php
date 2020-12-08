<?php

class Login_model extends CI_model
{
  function check_login($numero){
    $this->db->select('pin');
    $this->db->from('pankkikortti');
    $this->db->where('numero', $numero);
    return $this->db->get()->row('pin');
  }
}
