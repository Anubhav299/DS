<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_7</title>
</head>
<body>
    <?php
    $flag=1;
    $num=$_POST["num"];
    if($num<1){
        $flag=0;
        echo "Invalid Number!";
    }
    elseif ($num==1){
        $flag=0;
        echo "$num is a not a Prime Number!";
    }
    for ($i=2;$i<$num && $flag==1;$i++) 
    {
        if ($num%$i==0){
            echo "$num is not a Prime Number!";
            $flag=0;
        }
    }
    if ($flag==1) echo "$num is a Prime Number!";
    ?>
</table>
</body>
</html>