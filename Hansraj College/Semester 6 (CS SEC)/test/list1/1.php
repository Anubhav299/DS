<?php
$marks =$_POST["marks"];
echo  "Your marks are  $marks"."<br>";
if ($marks<=100)
    {
        if ($marks>=90)
        {
            echo 'Your grade--A';
        }
        elseif ($marks>=80)
        {
            echo "Your grade--B";
        }
        elseif ($marks>=70)
        {
            echo "Your grade--C";
        }
        elseif ($marks>=60)
        {
            echo "Your grade--D";
        }
        elseif ($marks>=50)
        {
            echo "Your grade--E";
        }
        else
        {
            echo "Your grade-- F";
        }
    }
    else
    {
        echo "Out of range";
    }
?>