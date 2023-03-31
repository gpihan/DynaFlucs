#include "Parameters.h"
#include <fstream>
#include <iostream>


Parameters::Parameters(std::string filepath) {}

void Parameters::read(){
	load(filepath);	

    extract("system_size", system_size); 
    extract("dx", dx); 
    extract("t_eq", t_eq);
    extract("t_ev", t_ev);
    extract("tau_init", tau_init);
    extract("tau0", tau0);
    extract("dtEq", dtEq);
    extract("dtEv", dtEv);
    extract("a_eq", a_eq);
    extract("a_ev", a_ev);
    extract("nc; ", nc); 
    extract("T_eq", T_eq);
    extract("T_ev", T_ev);
    extract("xi0;", xi0); 
    extract("Ncel", Ncell);
    extract("timestepEq", timestepEq); 
    extract("timestepEv", timestepEv);
    extract("nbsimulation", nbsimulation);
    extract("UseExpansion", UseExpansion);
    extract("folderName", folderName);
    extract("WhenInit", WhenInit);
    extract("InitialConditionsMode", InitialConditionsMode);
    extract("InitialConditionsB_Filename", InitialConditionsB_Filename);
    extract("InitialConditionsQ_Filename", InitialConditionsQ_Filename);
    extract("InitialConditionsS_Filename", InitialConditionsS_Filename);
    extract("meanB", meanB);
    extract("meanQ", meanQ);
    extract("meanS", meanS);
    extract("sigmaB", sigmaB);
    extract("sigmaQ", sigmaQ);
    extract("sigmaS", sigmaS);
    extract("meanBA", meanB);
    extract("meanQA", meanQ);
    extract("meanSA", meanS);
    extract("sigmaBA", sigmaB);
    extract("sigmaQA", sigmaQ);
    extract("sigmaSA", sigmaS);
    extract("meanBB", meanB);
    extract("meanQB", meanQ);
    extract("meanSB", meanS);
    extract("sigmaBB", sigmaB);
    extract("sigmaQB", sigmaQ);
    extract("sigmaSB", sigmaS);
    extract("InitValueB", InitValueB);
    extract("InitValueQ", InitValueQ);
    extract("InitValueS", InitValueS);
    extract("m2File", m2File);
    extract("filemuB", filemuB);
    extract("filemuQ", filemuQ);
    extract("filemuS", filemuS);
    extract("HRGspecies_file_name", HRGspecies_file_name);
    extract("kBBfile", kBBfile);
    extract("kBQfile", kBQfile);
    extract("kBSfile", kBSfile);
    extract("kQQfile", kQQfile);
    extract("kQSfile", kQSfile);
    extract("kSSfile", kSSfile);
    extract("cBBfile", cBBfile);
    extract("cBQfile", cBQfile);
    extract("cBSfile", cBSfile);
    extract("cQQfile", cQQfile);
    extract("cQSfile", cQSfile);
    extract("cSSfile", cSSfile);
    extract("chiBBfile", chiBBfile);
    extract("chiQQfile", chiQQfile);
    extract("chiSSfile", chiSSfile);
    extract("chiBQfile", chiBQfile);
    extract("chiBSfile", chiBSfile);
    extract("chiQBfile", chiQBfile);
    extract("chiQSfile", chiQSfile);
    extract("chiSBfile", chiSBfile);
    extract("chiSQfile", chiSQfile);
    extract("EquilibrationScheme", EquilibrationScheme);
    extract("EvolutionScheme", EvolutionScheme);
    extract("TemperatureProfile", TemperatureProfile);
    extract("TemperatureProfileName", TemperatureProfileName);
    extract("dcs2", dcs2);
    extract("CorrelationfileEq", CorrelationfileEq);
    extract("CorrelationfileEv", CorrelationfileEv);
    extract("ComputeCorrelationFunctionEq", ComputeCorrelationFunctionEq);
    extract("ComputeCorrelationFunctionEv", ComputeCorrelationFunctionEv);
    extract("EqCorrelationEvery", EqCorrelationEvery);
    extract("EvCorrelationEvery", EvCorrelationEvery);
    extract("EqCorrelationEverySteps", EqCorrelationEverySteps);
    extract("EvCorrelationEverySteps", EvCorrelationEverySteps);
    extract("EqCorrelationStart", EqCorrelationStart);
    extract("EvCorrelationStart", EvCorrelationStart);
    extract("EqCorrelationStop", EqCorrelationStop);
    extract("EvCorrelationStop", EvCorrelationStop);
    extract("EqCorrelationStartSteps", EqCorrelationStartSteps);
    extract("EvCorrelationStartSteps", EvCorrelationStartSteps);
    extract("EqCorrelationStopSteps", EqCorrelationStopSteps);
    extract("EvCorrelationStopSteps", EvCorrelationStopSteps);

    extract("CovariancesfileEq", CovariancesfileEq);
    extract("CovariancesfileEv", CovariancesfileEv);
    extract("ComputeCovariancesFunctionEq", ComputeCovariancesFunctionEq);
    extract("ComputeCovariancesFunctionEv", ComputeCovariancesFunctionEv);
    extract("EqCovariancesEvery", EqCovariancesEvery);
    extract("EvCovariancesEvery", EvCovariancesEvery);
    extract("EqCovariancesEverySteps", EqCovariancesEverySteps);
    extract("EvCovariancesEverySteps", EvCovariancesEverySteps);
    extract("EqCovariancesStart", EqCovariancesStart);
    extract("EvCovariancesStart", EvCovariancesStart);
    extract("EqCovariancesStop", EqCovariancesStop);
    extract("EvCovariancesStop", EvCovariancesStop);
    extract("EqCovariancesStartSteps", EqCovariancesStartSteps);
    extract("EvCovariancesStartSteps", EvCovariancesStartSteps);
    extract("EqCovariancesStopSteps", EqCovariancesStopSteps);
    extract("EvCovariancesStopSteps", EvCovariancesStopSteps);

    extract("StructureFactorfileEq", StructureFactorfileEq);
    extract("StructureFactorfileEv", StructureFactorfileEv);
    extract("ComputeStructureFactorFunctionEq", ComputeStructureFactorFunctionEq);
    extract("ComputeStructureFactorFunctionEv", ComputeStructureFactorFunctionEv);
    extract("EqStructureFactorEvery", EqStructureFactorEvery);
    extract("EvStructureFactorEvery", EvStructureFactorEvery);
    extract("EqStructureFactorEverySteps", EqStructureFactorEverySteps);
    extract("EvStructureFactorEverySteps", EvStructureFactorEverySteps);
    extract("EqStructureFactorStart", EqStructureFactorStart);
    extract("EvStructureFactorStart", EvStructureFactorStart);
    extract("EqStructureFactorStop", EqStructureFactorStop);
    extract("EvStructureFactorStop", EvStructureFactorStop);
    extract("EqStructureFactorStartSteps", EqStructureFactorStartSteps);
    extract("EvStructureFactorStartSteps", EvStructureFactorStartSteps);
    extract("EqStructureFactorStopSteps", EqStructureFactorStopSteps);
    extract("EvStructureFactorStopSteps", EvStructureFactorStopSteps);
    extract("RapidityWindow", RapidityWindow);
    extract("RapidityWindowSteps", RapidityWindowSteps);
    extract("IntegratedCovariancesfileEq", IntegratedCovariancesfileEq);
    extract("IntegratedCovariancesfileEv", IntegratedCovariancesfileEv);
    extract("ComputeIntegratedCovariancesFunctionEq", ComputeIntegratedCovariancesFunctionEq);
    extract("ComputeIntegratedCovariancesFunctionEv", ComputeIntegratedCovariancesFunctionEv);
    extract("EqIntegratedCovariancesEvery", EqIntegratedCovariancesEvery);
    extract("EvIntegratedCovariancesEvery", EvIntegratedCovariancesEvery);
    extract("EqIntegratedCovariancesEverySteps", EqIntegratedCovariancesEverySteps);
    extract("EvIntegratedCovariancesEverySteps", EvIntegratedCovariancesEverySteps);
    extract("EqIntegratedCovariancesStart", EqIntegratedCovariancesStart);
    extract("EvIntegratedCovariancesStart", EvIntegratedCovariancesStart);
    extract("EqIntegratedCovariancesStop", EqIntegratedCovariancesStop);
    extract("EvIntegratedCovariancesStop", EvIntegratedCovariancesStop);
    extract("EqIntegratedCovariancesStartSteps", EqIntegratedCovariancesStartSteps);
    extract("EvIntegratedCovariancesStartSteps", EvIntegratedCovariancesStartSteps);
    extract("EqIntegratedCovariancesStopSteps", EqIntegratedCovariancesStopSteps);
    extract("EvIntegratedCovariancesStopSteps", EvIntegratedCovariancesStopSteps);

    extract("AveragesfileEq", AveragesfileEq);
    extract("AveragesfileEv", AveragesfileEv);
    extract("ComputeAveragesFunctionEq", ComputeAveragesFunctionEq);
    extract("ComputeAveragesFunctionEv", ComputeAveragesFunctionEv);
    extract("EqAveragesEvery", EqAveragesEvery);
    extract("EvAveragesEvery", EvAveragesEvery);
    extract("EqAveragesEverySteps", EqAveragesEverySteps);
    extract("EvAveragesEverySteps", EvAveragesEverySteps);
    extract("EqAveragesStart", EqAveragesStart);
    extract("EvAveragesStart", EvAveragesStart);
    extract("EqAveragesStop", EqAveragesStop);
    extract("EvAveragesStop", EvAveragesStop);
    extract("EqAveragesStartSteps", EqAveragesStartSteps);
    extract("EvAveragesStartSteps", EvAveragesStartSteps);
    extract("EqAveragesStopSteps", EqAveragesStopSteps);
    extract("EvAveragesStopSteps", EvAveragesStopSteps);

    extract("RawDatafileEq", RawDatafileEq);
    extract("RawDatafileEv", RawDatafileEv);
    extract("ComputeRawDataFunctionEq", ComputeRawDataFunctionEq);
    extract("ComputeRawDataFunctionEv", ComputeRawDataFunctionEv);
    extract("EqRawDataEvery", EqRawDataAveragesEvery);
    extract("EvRawDataEvery", EvRawDataAveragesEvery);
    extract("EqRawDataEverySteps", EqRawDataEverySteps);
    extract("EvRawDataEverySteps", EvRawDataEverySteps);
    extract("EqRawDataStart", EqRawDataStart);
    extract("EvRawDataStart", EvRawDataStart);
    extract("EqRawDataStop", EqRawDataStop);
    extract("EvRawDataStop", EvRawDataStop);
    extract("EqRawDataStartSteps", EqRawDataStartSteps);
    extract("EvRawDataStartSteps", EvRawDataStartSteps);
    extract("EqRawDataStopSteps", EqRawDatatopSteps);
    extract("EvRawDataStopSteps", EvRawDatatopSteps);

    extract("turn_on_B", turn_on_B);
    extract("turn_on_Q", turn_on_Q);
    extract("turn_on_S", turn_on_S);
    extract("TryObservablesOnGPUMemory", TryObservablesOnGPUMemory);
}

bool Parameters::load(std::string file) {
    std::ifstream ifs;
    ifs.open(file);
    if (ifs.fail()){
            std::cout << "can't read parameter file: " << file;
            return false;
    }

    std::string line;
    lines.clear();
    while(std::getline(ifs, line)){
        if(line.substr(0, 1) == "#" || line.empty()) continue;

        lines.push_back(line);        
    }
    ifs.close();

    return true;
}
