#include "filters.hpp"

Filters* createFiltersOpenCV();

Filters* createFiltersMoshkina();

Filters* createFilters(FILTERS_IMPLEMENTATIONS impl)
{
    switch (impl) {
        case OPENCV:
            return createFiltersOpenCV();
		case MOSHKINA:
			return createFiltersMoshkina();
        default:
            return 0;
    }
}


