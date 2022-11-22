

//login sign up sectcetion
//verabiles
let signupFormID =document.getElementById("sign-up-box");
let loginFormID = document.getElementById("login-contaner");

let toLoginButton = document.getElementById("to-login");
let toSignupButton = document.getElementById("to-signup");

let signUpForm = document.getElementById("sign-up-form-id");
let loginForm = document.getElementById("login-form-id");


let userLoginName = document.getElementById("user-name").innerHTML;

let issignup =false;
let islogin =false;

let userEmail;
let userFirstName;
let userLastName;
let userpassword;
let confirmUserPassword;
let userwantLetter;

let savedEmail = "";
let savedPassword = "";
let savedFristName = "";


let userLoginEmail;
let userLoginPassword;


//functions

toLoginButton.addEventListener('click', function(event){
    event.preventDefault();

    signupFormID.style.display = "none";
    loginFormID.style.display ="inline";

    issignup = true;
    //alert('sign up');
});

toSignupButton.addEventListener('click', function (event) {
    event.preventDefault();

    signupFormID.style.display = "inline";
    loginFormID.style.display = "none";

    islogin = true;
   //alert('login');
});

    

   

signUpForm.addEventListener('submit',function(event){
    event.preventDefault();
    userEmail = document.forms["sign-up-form-name"]["sign-up-email"].value;
    userFirstName = document.forms["sign-up-form-name"]['sign-up-first-name'].value;
    userLastName = document.forms["sign-up-form-name"]["sign-up-last-name"].value;
    userpassword = document.forms["sign-up-form-name"]["sign-up-password-first"].value;
    confirmUserPassword = document.forms["sign-up-form-name"]["sign-up-password-confirm"].value;
    userwantLetter = document.forms["sign-up-form-name"]["sign-up-opt-for-mail"].value;


    if(userpassword != confirmUserPassword){
        alert("YOU'ER PASSWORD IS NOT THE SAME");
    }

    if(userEmail == ""){
        alert("no email entered")
    }

    if(userFirstName == ""){
        alert("no first name entered")
    }

    if(userLastName == ""){
        alert("no last name entered")
    }
    
    if(userpassword == confirmUserPassword && userEmail != "" && userFirstName != "" && userLastName !=""){
        alert("User acount Created");        
        //window.location.assign("/pages/index.html");
        signupFormID.style.display = "none";
        loginFormID.style.display ="inline";
        issignup = true;
        
    }

});


loginForm.addEventListener('submit', function(event){
    event.preventDefault();
    userLoginEmail = document.forms["login-form-name"]["login-email"].value;
    userLoginPassword = document.forms["login-form-name"]["login-password-first"].value;

    let canlogin = false;
    let canloginpassword =false;

    if(userLoginEmail == ""){
        alert("enter your email");
    }else if(userLoginEmail == userEmail){
        alert("email found");
        canlogin =true;
    }else{
        alert("unable to find email");
    }

    if(userLoginPassword == ""){
        alert("enter your password");
    }else if(userLoginPassword == userEmail){
        alert("email found");
        canloginpassword = true;

    }else{
        alert("unable to find your password");
    }

    if(canlogin && canloginpassword){
        
        loadsaveUser();
        //alert(userLoginName);
        //alert(userFirstName);
    }

});


let userData={
    email:userEmail,
    firstName:userFirstName,
    lastName:userLastName,
    password:userpassword,
    newsLetter:userwantLetter
};

let userDataSring = JSON.stringify(userData);

localStorage.setItem("SavedUserData", userDataSring);

function loadsaveUser(){
    let loadedUserData = localStorage.getItem("SavedUserData");
    let loadedUserObj = JSON.parse(loadedUserData);
    alert(loadedUserObj.firstName);
    userLoginName.innerHTML += loadedUserObj.firstName;
}
