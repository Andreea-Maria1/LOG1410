///////////////////////////////////////////////////////////
//  Record.cpp
//  Implementation of the Class Record
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "Record.h"


Record::Record(std::string title)
	: m_properties(title)
{
}

Record* Record::clone() const
{
	// À compéter: alloue un nouvel objet identique à this et retourne le pointeur
}

DateProperty& Record::addProperty(std::string name, int day, int month, int year)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
}

IntProperty& Record::addProperty(std::string name, int value)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
}

FloatProperty& Record::addProperty(std::string name, float value)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
}

SectionProperty& Record::addProperty(std::string name)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
}

StringProperty& Record::addProperty(std::string name, std::string value)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
}

URLProperty& Record::addProperty(std::string name, std::string displayText, std::string URL)
{
	// À compléter: Ajouter une nouvelle propriété en fournissant un objet qui sera copié
	//              retourner la référence à la propriété qui vient d'être copiée en convertissant 
	//              son type au bon type dérivé
}

PropertyIterator Record::begin()
{
	// À compléter
}

PropertyIterator Record::end()
{
	// À compléter
}

PropertyIterator_const Record::cbegin() const
{
	// À compléter
}

PropertyIterator_const Record::cend() const
{
	return m_properties.cend();
}

void Record::deleteProperty(PropertyIterator_const child)
{
	m_properties.deleteProperty(child);
}

std::ostream& operator<<(std::ostream& o, const Record& rec)
{
	return o << rec.m_properties << std::endl;
}
