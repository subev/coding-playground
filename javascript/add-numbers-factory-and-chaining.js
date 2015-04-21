    function add(){
        if(arguments.length > 1) {
            var total = 0;
            for (var i = 0 ; i < arguments.length; i++ ) {
                total += Number.parseInt(arguments[i]);
            }
            return total;
        }

        var summer = function (a) {
            summer.total += a;
            return summer.total;
        };

        summer.total = Number.parseInt(arguments[0]);
        return summer;
    }

    alert(add(2,7))
    alert(add(2)(7))
    alert(add(5, 3))
    alert(add(5)(3))
