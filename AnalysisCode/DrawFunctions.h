double mc2[52]={4.8551E-07,
                        1.74806E-06,
                        3.30868E-06,
                        1.62972E-05,
                        4.95667E-05,
                        0.000606966,
                        0.003307249,
                        0.010340741,
                        0.022852296,
                        0.041948781,
                        0.058609363,
                        0.067475755,
                        0.072817826,
                        0.075931405,
                        0.076782504,
                        0.076202319,
                        0.074502547,
                        0.072355135,
                        0.069642102,
                        0.064920999,
                        0.05725576,
                        0.047289348,
                        0.036528446,
                        0.026376131,
                        0.017806872,
                        0.011249422,
                        0.006643385,
                        0.003662904,
                        0.001899681,
                        0.00095614,
                        0.00050028,
                        0.000297353,
                        0.000208717,
                        0.000165856,
                        0.000139974,
                        0.000120481,
                        0.000103826,
                        8.88868E-05,
                        7.53323E-05,
                        6.30863E-05,
                        5.21356E-05,
                        4.24754E-05,
                        3.40876E-05,
                        2.69282E-05,
                        2.09267E-05,
                        1.5989E-05,
                        4.8551E-06,
                        2.42755E-06,
                        4.8551E-07,
                        2.42755E-07,
                        1.21378E-07,
                        4.8551E-08};
double data2[52]={
4.49873379421785E-005	,
0.0002734329	,
0.0002829032	,
0.0003713701	,
0.0005505258	,
0.0008813604	,
0.0026826432	,
0.0166379415	,
0.0618837545	,
0.1203749801	,
0.1715793027	,
0.1959297551	,
0.1788795228	,
0.1285242708	,
0.0723801445	,
0.0322818448	,
0.0116512156	,
0.0035181198	,
0.0009365339	,
0.0002378211	,
6.3484922942407E-005	,
1.9640165964275E-005	,
7.51884233725539E-006	,
3.47269001094576E-006	,
1.75552059572915E-006	,
8.94169705326947E-007	,
4.40644428362066E-007	,
0.000000207	,
9.23073857687134E-008	,
0.000000039	,
1.56317481250602E-008	,
5.93482507474814E-009	,
2.1353501155199E-009	,
7.28092380422255E-010	,
2.35266751336713E-010	,
7.20423931836899E-011	,
2.09059068601469E-011	,
5.74917354326211E-012	,
1.49829687744647E-012	,
3.70036607069327E-013	,
8.66064573134044E-014	,
1.92095530821743E-014	,
4.03783143396351E-015	,
8.04352330952033E-016	,
1.51850475885846E-016	,
2.71662388084133E-017	,
4.60882697565656E-018	,
7.37768210770165E-019	,
1.15691685161167E-019	,
1.71283468612116E-020	,
0	,
0	,
};

float weight2(int i){
if(i<0) return 1;
if(i>51) return 1;
return data2[i]/mc2[i];
}
