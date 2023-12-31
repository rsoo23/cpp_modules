/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:42:49 by rsoo              #+#    #+#             */
/*   Updated: 2023/12/07 23:42:49 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.h"

#pragma once

class PmergeMe {
    public:
        PmergeMe();
        PmergeMe( const PmergeMe& other );
        PmergeMe& operator=( const PmergeMe& other );
		~PmergeMe();

        void fordJohnsonAlgorithmVec();
        void fordJohnsonAlgorithmLst();

        template <typename P, typename T>
        void getPairs( P& pairs, const T& container );

        template <typename P>
        void mergeSortPairs( P& pairs );

		template <typename P>
        void mergePairs( P& left, P& right, P& res );
        
        template <typename T, typename P>
        void sortIntoMainChain( T& container, P& pairs, int unpairedRemainder );

        int getJacobsthalNum( int index );

        // time
        void startClock();
        void stopClock();
        void calculateDuration( const std::string& containerName );

        // error checking
        void assignInputToContainers( int ac, char **av );
        void checkSorted();
        void checkDuplicates();

        // printing
        void printOutput( char **av );
        template <typename T>
        void printContainerElements( T& container, const std::string& containerName );
        template <typename P>
        void printPairs( P& pairs );
		
        // exceptions
        class inputHasDuplicate: public std::exception {
			public:
				const char* what() const throw();
		};

		class inputHasNegative: public std::exception {
			public:
				const char* what() const throw();
		};

		class inputIsSorted: public std::exception {
			public:
				const char* what() const throw();
		};

		class inputNotNumber: public std::exception {
			public:
				const char* what() const throw();
		};

    private:
        std::vector<int> _vec;
        std::list<int> _lst;
        struct timeval _startTime;
        struct timeval _endTime;
        int _vecSortDuration;
        int _lstSortDuration;

};
