package constructor_method.mobile_device;

public class Identification {
    public static void main(String[] args) {
        // first instance
        MobileDevice a = new MobileDevice();
        a.identifyNumber("13 99655 8666");
        a.identifyUser("Carla");

        // second instance
        MobileDevice b = new MobileDevice();
        b.identifyNumber("13 99777 6688");
        b.identifyUser("Giovana");

        /* Each object has its own:
            a.number = "13 99655 8666"
            b.number = "13 99777 6688"
        This happens because number is not static.
        */

        /* But since "user" and "ddd" are shared, as they are shared variables,
           the second value overwrites the first one.
           So, in the end, both a.user and b.user, and both a.DDD and b.DDD,
           will show the last assigned value.
        */

        /*
        System.out.println("phone number " + a.numero);
        System.out.println("phone user " + a.usuario);

        System.out.println("phone number " + b.numero);
        System.out.println("phone user " + b.usuario);

        b.DDD = 17;
        a.DDD = 16;

        System.out.println("phone DDD " + b.DDD);
        System.out.println("phone DDD " + a.DDD);
         */
    }
}

/* Variable declaration
   static inside a class:
   the assigned value will follow the last
   object instance.
*/