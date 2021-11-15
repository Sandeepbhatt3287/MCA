function load_function()
{
    document.getElementById("login-form-container").style.visibility = "hidden";
}

function visible_hide_login()
{
    if(document.getElementById("login-form-container").style.visibility == "hidden")
        document.getElementById("login-form-container").style.visibility = 'visible';
     else
        document.getElementById("login-form-container").style.visibility = "hidden";
}