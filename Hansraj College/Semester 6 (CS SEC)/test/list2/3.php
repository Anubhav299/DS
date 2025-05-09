<center>
<table border = "3" >
  
<?php
$table = $_POST["num"];
$y = $_POST["row"];
mul($y);
function mul($y)
{
    global $table;
    for ($i = 1; $i <= $y; $i++) {
        echo "<tr>";
        $t = $table * $i;
        echo "<td>" . "$table * $i = $t" . "</td>";
    }
}
?>
</table>
</center>