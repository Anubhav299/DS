<?php
$marks =$_POST["marks"];
echo  "Your marks are  $marks"."<br>".grades($marks);

function grades($marks)
{
    if ($marks <= 100) {
        if ($marks >= 90) {
            return 'Your grade--A';
        } elseif ($marks >= 80) {
            return "Your grade--B";
        } elseif ($marks >= 70) {
            return "Your grade--C";
        } elseif ($marks >= 60) {
            return "Your grade--D";
        } elseif ($marks >= 50) {
            return "Your grade--E";
        }else {
            return "Your grade-- F";
        }
    }
    else
    {
        return "Out of range";
    }
}



?>