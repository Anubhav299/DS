<table border = "1">
<?php
$table = $_POST["num"];
$y = $_POST["row"];
for($i = 1;$i<=$y;$i++)
{
    echo "<tr>";
    $t = $table * $i;
    echo "<td>"."$table * $i = $t"."</td>";
}
?>
</table>