function maxofarray(){
    var arr = [1,2,3,4,5,6,7,8,9,10];
    arr.sort(function(a,b){return a-b});
    arr.reverse();
    return arr[-1];
}

function asc_arr(arr){
    arr.sort(function(a,b){return a-b});
    return arr;
}

function desc_arr(arr){
    arr.sort();
    return arr.reverse();
}

function shownameinp(){
    document.getElementById("name").innerHTML = "Nihir Shah";
}

function showhiddenname(){
    document.getElementById("hiddenname").style.display = "block";
}

function increasesize(){
    document.getElementById("size").style.fontSize = "25px";
}

function showdate(){
    document.getElementById("date").innerHTML = new Date();
}

function copydata(){
    document.getElementById("box2").value = document.getElementById("box1").value;
}

function checkemail(){
    var email = document.getElementById("email").value;
    if(! email.includes("@")){
        document.getElementById("warn").innerHTML = "Please have @ in your email-id";
    }
    else if(email=""){
        document.getElementById("warn").innerHTML = "";
    }
    else{
        document.getElementById("warn").innerHTML = "";
    }
}


function checknos(){
    var num = document.getElementById("num").value;
    if (num.length != 10){
        document.getElementById("warn2").innerHTML = "Mobile Number should have 10 digits";
    }
    
    else{
        document.getElementById("warn2").innerHTML = "";
    }
}

function rand(){
    document.getElementById("rand").innerHTML = Math.floor(Math.random()*100);
}