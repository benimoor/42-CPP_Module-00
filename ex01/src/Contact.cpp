#include "Contact.hpp"

void Contact::setFirstName(std::string r_fname)
{
    m_fname = r_fname;
}

void Contact::setLastName(std::string r_lname)
{
    m_lname = r_lname;
}

void Contact::setNickName(std::string r_nname)
{
    m_nname = r_nname;
}

void Contact::setPhone(std::string r_phone)
{
    m_phone = r_phone;
}

void Contact::setSecret(std::string r_secret)
{
    m_secret = r_secret;
}

void Contact::setId(int r_id)
{
    m_id = r_id;
}

std::string Contact::getFirstName() const
{
    return m_fname;
}

std::string Contact::getLastName() const
{
    return m_lname;
}

std::string Contact::getNickName() const
{
    return m_nname;
}

std::string Contact::getPhone() const
{
    return m_phone;
}

std::string Contact::getSecret() const
{
    return m_secret;
}

int			Contact::getId() const
{
    return m_id;
}

