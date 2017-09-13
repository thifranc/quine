<?php
/*
 42
*/
function prnt(){
$s = '<?php%c/*%c 42%c*/%cfunction prnt(){%c%cs = %c%s%c;%cprintf($s, 10, 10, 10, 10, 10, 36, 39, $s, 39, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c}%cfunction main(){%c/*%c ok%c*/%cprnt();%c}%cmain();%c?>%c';
printf($s, 10, 10, 10, 10, 10, 36, 39, $s, 39, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
}
function main(){
/*
 ok
*/
prnt();
}
main();
?>
