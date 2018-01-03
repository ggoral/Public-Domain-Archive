<?php
   $result = file_get_contents('php://input');
   $array = explode(PHP_EOL, $result);
   $count = count($array);

   $file = '';
   $file_name = explode('"',$array[1])[3];

   var_dump($array);

   for($i = 4; $i < $count - 1; $i++)
   {
      print $i;
      $file = $file . $array[$i] . PHP_EOL;
   }
   $file = $file . $array[$i];

   file_put_contents($file_name, $file)
?>
