<?php
$a = $_POST["num"];
echo "Factors of $a  are"."<br>";
for($i = 1;$i<=$a+1;$i++)
    {
        if ($a%$i == 0)
        {
            echo $i." ";
        }
    }
?>
