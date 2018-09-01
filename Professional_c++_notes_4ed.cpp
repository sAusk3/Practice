// Compilation commands
// gcc -lstdc++ -std=c++17 -o <executable name> <source cpp1> ....


/*
 * saveRecord()
 * 
 * Saves the given record to the database.
 *
 * Parameters:
 *    Record& record: the record to save to the database.
 * Returns: int
 *    An integer representing the ID of the saved record.
 * Throws:
 *    DatabaseNotOpenedException if the openDatabase() method has not
 *    been called yet.
 */
int saveRecord(Record& record);

  /**
         * Computes the seed ratio, using the Marigold algorithm.
         * @param slowCalc Whether or not to use long (slow) calculations
         * @return The marigold ratio
         */

        