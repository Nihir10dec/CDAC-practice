(function () {
    console.log("Nihir Shah");
})();


(function(a) {
        console.log(a*a);
})(5);


function sum() {
    var sum = 0;
    console.log(Array.isArray(arguments))
    for (let i = 0; i < arguments.length; i++) {
      sum += arguments[i];
    }
    return sum;
  }

console.log(sum(1,2,3,10));
