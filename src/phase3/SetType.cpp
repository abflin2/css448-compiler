/******************************************************************************
 * @file SetType.h                                                            *
 *                                                                            *
 * @brief CSS 448 - Compiler Phase 3 - SetType                                *
 *                                                                            *
 * @author John Steele      \<steelejr@u.washington.edu\>                     *
 * @author Alicia Flinchum  \<aliciaflinchum@yahoo.com\>                      *
 *                                                                            *
 * @version 1.0.0                                                             *
 * @date May 1, 2011                                                          *
 *                                                                            *
 * @brief SetType represents a SetType identifier.                            *
 *****************************************************************************/

#include "SetType.h"

//---------------------Constructor---------------------------------------------
/**
 * @brief Creates a SetType with the provided name.
 *
 * Preconditions: None.
 *
 * Postconditions: This SetType was instantiated.
 *
 * @param name The name of the SetType.
 */
SetType::SetType(string name) : IdentifierRecord (name) {
	dimension = new Dimension ();
}


//---------------------Destructor----------------------------------------------
/**
 * @brief Deletes all dynamically allocated objects within the
 *        SetType.
 *
 * Preconditions: None.
 *
 * Postconditions: Resources were released.
 */
SetType::~SetType() {
	delete dimension;
	dimension = NULL;
}


//---------------------print---------------------------------------------------
/**
 * @brief Prints the data members of this IdentifierRecord to the
 *        output stream.
 *
 * Preconditions: Data members have been initialized.
 *
 * Postconditions: This IdentifierRecord's members have been printed.
 *
 * @param scope The scope of this identifier (used for indenting purposes).
 */
void SetType::print(int scope) const {

	// Print the name.
	IdentifierRecord::print(scope);

	// Print the dimension.
	cout << dimension->low << ".." << dimension->high;
}


//---------------------setLowDimenstion----------------------------------------
/**
 * @brief Sets the low value to a new dimension of this RecordType.
 *
 * Preconditions: None.
 *
 * Postconditions: The low dimension of this SetType was set.
 *
 * @param lowDim The low value of this SetType was set.
 */
void SetType::setLowDimension (int lowDim) {
	dimension->low = lowDim;
}


//---------------------setHighDimenstion---------------------------------------
/**
 * @brief Sets the high value to the dimension of this SetType.
 *
 * Preconditions: None.
 *
 * Postconditions: The high value to the dimension of this SetType was
 *                 set to the provided value.
 *
 * @param highDim The high value to a dimension of this SetType.
 */
void SetType::setHighDimension (int highDim) {
	dimension->high = highDim;
}