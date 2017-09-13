<?php
$i = 5;
$next;
if (strcmp(basename(__FILE__),"Sully.php") == 0)
$next = $i;
else
$next = $i - 1;
if ($i > 0){
$s = '<?php%c$i = %d;%c$next;%cif (strcmp(basename(__FILE__),"Sully.php") == 0)%c$next = $i;%celse%c$next = $i - 1;%cif ($i > 0){%c$s = %c%s%c;%c$fd = fopen("Sully_".$next.".php", "w");%cfprintf($fd, $s, 10, $next, 10, 10, 10, 10, 10, 10, 10, 39, $s, 39, 10, 10, 10, 10, 10, 10, 10, 10);%cfclose($fd);%cshell_exec("php Sully_".$next.".php");%c}%c?>%c';
$fd = fopen("Sully_".$next.".php", "w");
fprintf($fd, $s, 10, $next, 10, 10, 10, 10, 10, 10, 10, 39, $s, 39, 10, 10, 10, 10, 10, 10, 10, 10);
fclose($fd);
shell_exec("php Sully_".$next.".php");
}
?>
