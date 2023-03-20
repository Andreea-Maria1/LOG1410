///////////////////////////////////////////////////////////
//  DateProperty.cpp
//  Implementation of the Class DateProperty
//  Created on:      11-mars-2023 10:47:25
//  Original author: franc
///////////////////////////////////////////////////////////

#include "DateProperty.h"

DateProperty::DateProperty(std::string name, int day, int month, int year)
	: BaseProperty(name), m_date(day,month,year)
{
}

BaseProperty* DateProperty::clone() const 
{
	// a completer: alloue un nouvel objet identique a this et retourne le pointeur
	return new DateProperty(m_name, m_date.getDay(), m_date.getMonth(), m_date.getYear());
}

std::string DateProperty::getValueAsString() const 
{
	// a completer
	return m_date.toString();
}

std::ostream& DateProperty::printToStream(std::ostream& o) const
{
	// a completer
	return o;
}
