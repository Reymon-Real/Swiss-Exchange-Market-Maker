// *******************************
// *** Autor: PZH Gesellschaft ***
// *** Datum: 23. Juni. 2026   ***
// *** Aktua: 23. Juni. 2026   ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

#ifndef PZH_SXMM_EXCEPTION_HPP
#define PZH_SXMM_EXCEPTION_HPP

// ******************
// *** Enumerates ***
// ******************

// **************
// *** Unions ***
// **************

// **************
// *** Clases ***
// **************

class PZHException : public std::exception {

private:

	std::string m_msg;

public:

	PZHException(const std::string& msg): m_msg(msg) {}

	virtual const char* what() const noexcept {
		return this -> m_msg.c_str();
	}

};

// ***************
// *** Aliases ***
// ***************

using PZHException_t = PZHException;

#endif // PZH_SXMM_EXCEPTION_HPP