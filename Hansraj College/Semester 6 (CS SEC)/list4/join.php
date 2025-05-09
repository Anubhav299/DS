<?php
/////////// REVERSE 
    $a = $_POST['str'];
    echo "Reversed String ".strrev($a);
    echo "<br>";
    echo "<br>";

//////////// LOWERCASE 
    $lc = $_POST['lower'];
    $flag = ctype_lower($lc);
    if ($flag == 1)
    {
        echo "Lowercase String ";
    }
    else 
    {
    echo "Not lowercase";
    }
    echo "<br>";
    echo "<br>";

///////////// CHECK FOR SUBSTRING
    $b = $_POST['check'];
    $s = $_POST['search'];
    if(strpos($b,$s) != FALSE)
    {
        echo "Word found at ".strpos($b,$s);
    }
    else 
    {
        echo "Not found"; 
    }
    echo "<br>";
    echo "<br>";

//////////////// WHITESPACES
    $n = $_POST['space'];
    // echo trim($n);
    // echo "<br>";
    // echo "<br>";


    echo str_replace(" ","",$n);
    echo "<br>";
    echo "<br>";

/////////////// PALINDROME
    $pal = $_POST['palin'];
    if($pal == strrev($pal))
    {
        echo "Palindrome string";
    }
    else
    {
        echo "Not Palindrome";
    }
    echo "<br>";
    echo "<br>";

///////////// EXPLODE
    $explode = $_POST['exp'];
    $a = explode('##',$explode);
    $l = sizeof($a);
    for($i =0;$i<=$l-1;$i++)
    {
        echo "Array [$i] = ".$a[$i]."<br>";
    }

?>