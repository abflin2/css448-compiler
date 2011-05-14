/******************************************************************************
 * @file ArrayType.h                                                          *
 *                                                                            *
 * @brief CSS 448 - Compiler Phase 3 - IdentRecord                            *
 *                                                                            *
 * @author John Steele      \<steelejr@u.washington.edu\>                     *
 * @author Alicia Flinchum  \<aliciaflinchum@yahoo.com\>                      *
 *                                                                            *
 * @version 1.0.0                                                             *
 * @date May 1, 2011                                                          *
 *                                                                            *
 * @brief ArrayType represents a ArrayType identifier.                        *
 *****************************************************************************/

#include "RecordType.h"

//---------------------Constructor---------------------------------------------
/**
 * @brief Creates a RecordType with the provided name.
 *
 * Preconditions: None.
 *
 * Postconditions: This RecordType was instantiated.
 *
 * @param name The name of the RecordType.
 */
RecordType::RecordType(string name) : IdenifierRecord (name) {
	field_list = new vector <Field *> ();
}


//---------------------Destructor----------------------------------------------
/**
 * @brief Deletes all dynamically allocated objects within the
 *        RecordType.
 *
 * Preconditions: None.
 *
 * Postconditions: Resources were released.
 */
RecordType::~RecordType() {
	delete field_list;
	field_list = NULL;
}


//---------------------addField------------------------------------------------
/**
 * @brief Adds the provided field to this Record.
 *
 * Preconditions: The field is not NULL.
 *
 * Postconditions: The field, and its name were added to this Record.
 *
 * @param type The type of field.
 * @param name The name fo the field.
 */
void RecordType::addField(TypeRecord * type, string name) {
	Field * field = new Field ();
	field->name = name;
	field->type = type;
	field_list->push_back(field);
}


//---------------------print---------------------------------------------------
/**
 * @brief Prints the data members of this RecordType to the output stream.
 *
 * Preconditions: Data members have been initialized.
 *
 * Postconditions: This RecordType members have been printed.
 *
 * @param scope The scope of this identifier (used for indenting purposes).
	 */
void RecordType::print (int scope) const {
	IdentifierRecord::print(scope);
	for (int i = 0; i < (long) field_list->size(); i++) {
		cout << field_list->at(i)->name << " ";
		cout << field_list->at(i)->type << " ";
	}
}