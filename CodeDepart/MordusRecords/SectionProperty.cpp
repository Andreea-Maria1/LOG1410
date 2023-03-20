///////////////////////////////////////////////////////////
//  SectionProperty.cpp
//  Implementation of the Class SectionProperty
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "SectionProperty.h"


SectionProperty::SectionProperty(std::string name)
	: BaseProperty(name)
{
}

SectionProperty::SectionProperty(const SectionProperty& rhs)
	: BaseProperty(rhs)
{
	// À compléter: construire un objet identique à celui passé en argument en copiant tous ses enfants
}

SectionProperty* SectionProperty::clone() const
{
	// À compéter: alloue un nouvel objet identique à this et retourne le pointeur
}

std::string SectionProperty::getValueAsString(void) const
{
	// À compéter: retourner une chaine vide
}

BaseProperty& SectionProperty::addProperty(const BaseProperty& prop)
{
	// À compléter: ajouter une nouvelle propriété en clonant celle qui est passé en paramètre
	// 	            insérer la copie dans le conteneur STL
	//              retourner la référence à la copie qui vient d'être créée
}

PropertyIterator SectionProperty::begin()
{
	// À compéter
}

PropertyIterator SectionProperty::end()
{
	// À compéter
}

PropertyIterator_const SectionProperty::cbegin() const
{
	// À compéter
}

PropertyIterator_const SectionProperty::cend() const
{
	// À compéter
}

void SectionProperty::deleteProperty(PropertyIterator_const child)
{
	// À compéter
}

std::ostream& SectionProperty::printToStream(std::ostream& o) const
{
	// À compéter: imprimer le nom de la section sur le stream
	//             incrementer l'indentation
	//             iter sur les éléments contenus dans le conteneur 
	//                imprimer chaque élément sur le stream
	//             décrémenter l'indentation
}