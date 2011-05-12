/******************************************************************************
 * @file PointerType.h                                                        *
 *                                                                            *
 * @brief CSS 448 - Compiler Phase 3 - IdentRecord                            *
 *                                                                            *
 * @author John Steele      \<steelejr@u.washington.edu\>                     *
 * @author Alicia Flinchum  \<aliciaflinchum@yahoo.com\>                      *
 *                                                                            *
 * @version 1.0.0                                                             *
 * @date May 1, 2011                                                          *
 *                                                                            *
 * @brief PointerType represents a PointerType identifier.                    *
 *****************************************************************************/
//-----------------------------------------------------------------------------
/**
 * Includes following features:
 *	- Allows client to print PointerType.
 * 	- Allows clients to compare PointerType for equality.
 * 	- Allows clients to compare PointerTypes for less than value.
 */
//-----------------------------------------------------------------------------

#include "PointerType.h"

//---------------------Constructor---------------------------------------------
/**
 * @brief Creates a PointerType with the provided name.
 *
 * Preconditions: None.
 *
 * Postconditions: This PointerType was instantiated.
 *
 * @param name The name of the PointerType.
 */
PointerType::PointerType(string name) : IdentifierRecord (name) {

}


//---------------------Destructor----------------------------------------------
/**
 * @brief Deletes all dynamically allocated objects within the PointerType.
 *
 * Preconditions: None.
 *
 * Postconditions: Resources were released.
 */
PointerType::~PointerType() {

}


//---------------------operator<-----------------------------------------------
/**
 * @brief Compares this IdentfierRecord with the_other for less than value.
 *
 * Preconditions: The data members of this IdentfierRecord have been
 *                initialized.
 *
 * Postconditions: Returned true if this IdentfierRecord was less than
 *		           the_other.
 *
 * @param the_other The other IdentfierRecord to compare with this.
 *
 * @return True if this IdentfierRecord is less than the_other,
 *	       false otherwise.
 */
bool PointerType::operator<(const IdentifierRecord &the_other) const {
	bool result = false;

	return result;
}


//---------------------operator==----------------------------------------------
/**
 * @brief Compares this IdentfierRecord with the_other IdentfierRecord.
 *
 * Preconditions: The data members of this IdentfierRecord have been
 *		          initialized.
 *
 * Postconditions: Returned true if this IdentfierRecord was equal to
 *		           the_other.
 *
 * @param the_other The other IdentfierRecord to compare with this
 *                  IdentfierRecord.
 *
 * @return True if the_other is equal to this IdentifierRecord,
 *	       false otherwise.
 */
bool PointerType::operator==(const IdentifierRecord &the_other) const {
	bool result = false;

	return result;
}


//---------------------print---------------------------------------------------
/**
 * @brief Prints the data members of this IdentifierRecord to the output stream.
 *
 * Preconditions: Data members have been initialized.
 *
 * Postconditions: This IdentifierRecord's members have been printed.
 *
 * @param scope The scope of this identifier (used for indenting purposes).
 */
void PointerType::print(int scope) const {

}