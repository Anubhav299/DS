<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_6</title>
</head>
<body>
    <?php
    $num=$_POST["num"];
    $a=0;$b=1;
    echo "$a";
    function fibo($num){
    for ($i=$num;$i>0;$i--) 
    {
        echo ",$b";
        $sum=$a+$b;
        $a=$b;
        $b=$sum;
    }
}
?>
</table>
</body>
</html>