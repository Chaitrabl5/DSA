/*ANALYSIS OF COMMON LOOPS
1).FOR(I=0;I<N;I=I+C)
{
    //      "THETA(N)"
}

1).FOR(I=0;I<N;I=I-C)
{
    //        "THETA(N)"
}

1).FOR(I=0;I<N;I=I*C)
{
    //         "THETA(LOG(N))"
}

1).FOR(I=0;I<N;I=I/C)
{
    //         "THETA(LOG(N))"
}

1).FOR(I=0;I<N;I=POW(I,C))
{
    //          "THETA(LOG(LOGN))"
}

*/