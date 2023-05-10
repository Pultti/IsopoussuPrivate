#include "sonclass.h"

/*
 * Issues from this example:
 * 1. Only Father public methods are
 *    visible at son object.
 *
 * 2. Father protected methods are
 *    usable at all son class methods
 *    i.e. within son class.
 *
 * 3. check what happens if public
 *    inheritance is changed to
 *    protected and to private.
 *
 * 4. And let's see how we can
 *    initialize class attibutes
 *    (= muuttujia) before
 *    construcor executes.
 *
 * */



int main()
{

    SonClass object;


    //object.showFamilyInfo();
    object.showSonData();


    return 0;
}
