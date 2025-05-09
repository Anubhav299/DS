<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_10</title>
</head>
<body>
    <?php
    $num=$_POST["num"];
    
    $result=sumPalindrome($num);
    echo "Sum of the all digits of the number is ".$result[0]."<br>";
    if ($result[1]==1) echo "Number is Palindrome.";
    else echo "Number is not a Palindrome.";

    function sumPalindrome($num){
    $sum=0;$count=0;$flag=1;$count=0;
    for ($i=$num;$i>0;$i=(int)($i/10)){
        $rem=$i%10;
        $sum=$sum+$rem;
        if ((strval($num)[$count])!==strval($rem)) $flag=0;
        $count++;
    }
    return array($sum,$flag);
    }
    ?>
</table>
</body>
</html>