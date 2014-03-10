#ifndef __tree_sitter__first_set__
#define __tree_sitter__first_set__

#include "rules/symbol.h"
#include "item.h"
#include <set>

namespace tree_sitter {
    class PreparedGrammar;

    namespace build_tables {

        /*
         *  Returns the set of terminal symbols that can appear at
         *  the beginning of a string derivable from a given rule,
         *  in a given gramamr.
         */
        std::set<rules::Symbol> first_set(const rules::rule_ptr &rule, const PreparedGrammar &grammar);

        /*
         *  Returns the set of terminal symbols that can appear at
         *  the beginning of any item in the given set.
         */
        std::set<rules::Symbol> first_set(const ParseItemSet &item_set, const PreparedGrammar &grammar);
    }
}

#endif
