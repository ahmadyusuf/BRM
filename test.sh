#!/bin/ksh

echo "hi"

sqlplus test/test@kjdf << EOF
select count(1) from account_t
EOF
