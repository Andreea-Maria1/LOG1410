///////////////////////////////////////////////////////////
//  BaseProperty.h
//  Implementation of the Class BaseProperty
//  Created on:      11-mars-2023 10:47:25
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_29F118CC_9846_4689_B4D8_668537EC7D26__INCLUDED_)
#define EA_29F118CC_9846_4689_B4D8_668537EC7D26__INCLUDED_

/**
 * La classe <i>BaseProperty</i> repr�sente un �l�ment d�information d�un type donn�.
 * Cette classe regroupe un type de donn�e et une valeur. Chaque �l�ment
 * d�information peut �tre vu comme un attribut d�une entit� repr�sent�e par un
 * objet de la classe <i>Record</i> dans la base de connaissance. Par exemple, la
 * fiche d�un musicien pourrait contenir une propri�t� �ArtistLastName� de type
 * string et une propri�t� �DateOfBirth� de type Date, alors que la fiche d�une
 * �uvre pourrait, par exemple, contenir une propri�t� �Title� de type string. Le
 * nombre de propri�t�s contenues dans une fiche donn�e n�est pas fix� a priori.
 * Un utilisateur peut ajouter autant de propri�t�s qu�il le souhaite dans une
 * fiche.
 */

#include <ostream>
#include <string>

#include "PropertyContainer.h"

class BaseProperty
{

public:
	BaseProperty(std::string name) : m_name(name) {};
	virtual ~BaseProperty() = default;
	virtual BaseProperty* clone() const = 0;

	virtual std::string getName(void) const { return m_name; };
	virtual void setName(std::string name) { m_name = name; };
	virtual std::string getValueAsString(void) const = 0;

	virtual BaseProperty& addProperty(const BaseProperty& prop);
	virtual PropertyIterator begin();
	virtual PropertyIterator end();
	virtual PropertyIterator_const cbegin() const;
	virtual PropertyIterator_const cend() const;
	virtual void deleteProperty(PropertyIterator_const child);

protected:
	std::string m_name;

	friend std::ostream& operator<<(std::ostream& o, const BaseProperty& prop);
	virtual std::ostream& printToStream(std::ostream& o) const = 0;

	static int m_indent;
	std::ostream& indent(std::ostream& o) const;

private:
	static PropertyContainer m_emptyContainer;
};
#endif // !defined(EA_29F118CC_9846_4689_B4D8_668537EC7D26__INCLUDED_)
