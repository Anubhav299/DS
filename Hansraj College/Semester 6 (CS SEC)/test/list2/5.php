<?php
$u = $_POST["num"];

function fact($u)
{
    $fact = 1;
    for ($i = 1; $i <= $u; $i++) {
        $fact = $fact * $i;
    }
    return $fact;
}
echo "Factorial of $u is ".fact($u);
?>
