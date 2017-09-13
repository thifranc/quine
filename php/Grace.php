<?php
define("A", "1");
define("B", "2");
define("C", "3");
/*
 42
*/
$s = '<?php%cdefine("A", "1");%cdefine("B", "2");%cdefine("C", "3");%c/*%c 42%c*/%c$s = %c%s%c;%cfprintf(fopen("Grace_kid.php", "w"), $s, 10, 10, 10, 10, 10, 10, 10, 39, $s, 39, 10, 10, 10);%c?>%c';
fprintf(fopen("Grace_kid.php", "w"), $s, 10, 10, 10, 10, 10, 10, 10, 39, $s, 39, 10, 10, 10);
?>
