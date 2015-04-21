(function(){
  var initializing = false, fnTest = /xyz/.test(function(){xyz;}) ? /\b_super\b/ : /.*/;

  // The base Class implementation (does nothing)
  this.Class = function(){};

  // Create a new Class that inherits from this class
  Class.extend = function(prop) {
    var _super = this.prototype;

    // Instantiate a base class (but only create the instance,
    // don't run the init constructor)
    initializing = true;
    var prototype = new this();
    initializing = false;

    // Copy the properties over onto the new prototype
    for (var name in prop) {
      // Check if we're overwriting an existing function
      prototype[name] = typeof prop[name] == "function" &&
        typeof _super[name] == "function" && fnTest.test(prop[name]) ?
        (function(name, fn){
          return function() {
            var tmp = this._super;

            // Add a new ._super() method that is the same method
            // but on the super-class
            this._super = _super[name];

            // The method only need to be bound temporarily, so we
            // remove it when we're done executing
            var ret = fn.apply(this, arguments);
            this._super = tmp;

            return ret;
          };
        })(name, prop[name]) :
        prop[name];
    }

    // The dummy class constructor
    function Class() {
      // All construction is actually done in the init method
      if ( !initializing && this.init )
        this.init.apply(this, arguments);
    }

    // Populate our constructed prototype object
    Class.prototype = prototype;

    // Enforce the constructor to be what we expect
    Class.prototype.constructor = Class;

    // And make this class extendable
    Class.extend = arguments.callee;

    return Class;
  };
})();

(function(){
    var Person = Class.extend({
        init: function(name, age) {
            this.name = name;
            this.age = age;
        },
        sayName: function() {
            console.log(this.name + " " + this.age);
        }
    });

    var Ninja = Person.extend({
        throwBlades: function() {
            console.log(this.name + " throws blades all over the place");
        },
        sayRank: function() {
            console.log("my rank is " + this.rank);
        },
        init: function(name) {
            this.rank = "master";
            this._super(name, 100);
        }
    })

    var p1 = new Person("petkan", 33);

    var n1 = new Ninja("John");

    console.log("stringify person" + JSON.stringify(p1));
    console.log("stringify ninja" + JSON.stringify(n1));

    console.log(p1 instanceof Person, " p1 instance of Person");
    console.log(n1 instanceof Person, " n1 instance of Person");
    console.log(n1 instanceof Ninja, " n1 instance of Ninja");

    p1.sayName();
    n1.sayName();
    n1.throwBlades();
})();
