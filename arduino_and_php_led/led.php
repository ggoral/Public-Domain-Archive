<?php
   $led_number = escapeshellarg($_POST['led_number']);
   $port = escapeshellarg($_POST['port'])
   shell_exec('echo ' . $led_number  . ' >> ' . $port);
?>
