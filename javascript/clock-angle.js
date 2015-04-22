var func = function(hours, minutes) {
    var minutesAngle = minutes * (360 / 60);
    var hourAngle = (hours % 12) * (360 / 12) + (minutesAngle / 12);
    var angleBetweenMinAndHour = Math.abs(hourAngle - minutesAngle);
    console.log(hours, minutes, angleBetweenMinAndHour);
    return angleBetweenMinAndHour;

};

func(12,00);
func(18,30);
func(13,00);
func(13,10);
func(15,00);
func(15,45);
func(20,45);
