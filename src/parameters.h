#ifndef PARAMETERS_H
#define PARAMETERS_H

#include <sstream>
#include <vector>

class Parameters{
private:

    std::vector<std::string> lines;

public:

    double system_size; //!< Length of the system in (fm). 
    double dx; //!< spatial increment (fm).
    double t_eq; //!< Total duration of the equilibration in (fm).
    double t_ev; //!< Total duration of the evolution in (fm).
    double tau_init;//!< initial time (fm). 
    double tau0;//!< Physical time of equilibrium (fm). 
    double dtEq; //!< Temporal increment for the equilibrationin (fm).
    double dtEv; //!< Temporal increment the evolution (fm).
    double a_eq; //!< Stability factor for the equilibration (no unit, must be <0.5).
    double a_ev; //!< Stability factor for the evolution (no unit, must be <0.5).
    double nc; //!< Critical density in (fm).
    double T_eq; //!< Charateristic temperature for equilibration (GeV).
    double T_ev; //!< Charateristic temperature for evolution  (GeV).
    double xi0; //!< Characteristic length scale in (fm).
    int Ncell; //!< Number of spatial cells.
    int timestepEq; //!< Number of time steps during the equilibration. 
    int timestepEv; //!< Number of time steps during the evolutiuon. 
    unsigned long nbsimulation; //!< Number of simulations on which the statistics will be averaged.
    bool UseExpansion; //!< 0: Static box | 1: Bjorken-expansion.
    std::string folderName; //!< Name of the output folder of the simulation

    // Initial conditions for averages <nb>, <nq>, <ns>. At tau0, after equilibration these are added to the fluctuations.
    bool WhenInit; //!< 0: at the begining of the equilibration | 1: at the begining of the evolution.
    int InitialConditionsMode; //!< 0: File reading | 1: Gaussian | 2: Double Gaussian | 3: Constant.
    std::string InitialConditionsB_Filename;
    std::string InitialConditionsQ_Filename;
    std::string InitialConditionsS_Filename;

    double meanB, meanQ, meanS; //!< mean value of the initial Gaussians.
    double sigmaB, sigmaQ, sigmaS; //!< variance of the initial Gaussians.

    double meanBA, meanQA, meanSA; //!< mean value of the initial left Gaussians.
    double meanBB, meanQB, meanSB; //!< mean value of the initial right Gaussians.
    double sigmaBA, sigmaQA, sigmaSA; //!< variance of the initial left Gaussians.
    double sigmaBB, sigmaQB, sigmaSB; //!< variance of the initial right Gaussians.

    double InitValueB, InitValueQ, InitValueS; //!< Initial constant values for the densities (fm^-3).

    std::string m2File; //!< Name of the file containing m2 parametrization.

    std::string filemuB; //!< Name of the file containing values of muB from HRG EoS inversion. 
    std::string filemuQ; //!< Name of the file containing values of muQ from HRG EoS inversion. 
    std::string filemuS; //!< Name of the file containing values of muS from HRG EoS inversion. 

    std::string species_file_name; //!< Name of the file containing hadronic species properties. 

    std::string kBBfile; //!< Path of the file containing kappa values and coords fpr GPU.
    std::string kBQfile;
    std::string kBSfile;
    std::string kQQfile;
    std::string kQSfile;
    std::string kSSfile;

    std::string cBBfile; //!< Path of the file containing Cij values for GPU.
    std::string cBQfile;
    std::string cBSfile;
    std::string cQQfile;
    std::string cQSfile;
    std::string cSSfile;

    std::string chiBBfile; //!< Path of the file containing chiij values for GPU.
    std::string chiQQfile;
    std::string chiSSfile;
    std::string chiBQfile;
    std::string chiBSfile;
    std::string chiQBfile;
    std::string chiQSfile;
    std::string chiSBfile;
    std::string chiSQfile;


    // Choice of numerical integration scheme.
    std::string EquilibrationScheme; //!< Name of the scheme used for equilibration.
    std::string EvolutionScheme; //!< Name of the scheme used for equilibration.

    // Choice of temperature profile.
    int TemperatureProfile; //!< 0: Constant | 1: Hubble-like Ideal hydro | 2: From file.
    std::string TemperatureProfileFilename; 
    double dcs2; //!< The speed of sound.
    // Constant value or initial value are given by Teq, Tev caracteristic temperatures.


    // Observables
    // Correlation function
    std::string CorrelationfileEq; //!< Filename for the correlation function during equilibrium.
    std::string CorrelationfileEv; //!< Filename for the correlation function during evolution.
    bool ComputeCorrelationFunctionEq; //!< 1 to compute the correlation function during equilibration.
    bool ComputeCorrelationFunctionEv; //!< 1 to compute the correlation function during evolution.
    double EqCorrelationEvery; //!< Duration between each recording of the correlation function during the equilibration (fm).
    double EvCorrelationEvery; //!< Duration between each recording of the correlation function during the evolution (fm).
    int EqCorrelationEverySteps; //!< Number of steps between each recording of the correlation function during the equilibration.
    int EvCorrelationEverySteps; //!< Number of steps between each recording of the correlation function during the evolution.
    double EqCorrelationStart; //!< Start recording data from this time in the equilibration (fm).
    double EvCorrelationStart; //!< Start recording data from this time in the evolution (fm).
    int EqCorrelationStartSteps; //!< Start recording data from this timestep in the equilibration.
    int EvCorrelationStartSteps; //!< Start recording data from this timestep in the evolution.
    double EqCorrelationStop; //!< Stop recording data from this time in the equilibration (fm).
    double EvCorrelationStop; //!< Stop recording data from this time in the evolution (fm).
    int EqCorrelationStopSteps; //!< Stop recording data from this timestep in the equilibration.
    int EvCorrelationStopSteps; //!< Stop recording data from this timestep in the evolution.

    // Covariances
    std::string CovariancefileEq; //!< Filename for the covariances during equilibrium.
    std::string CovariancefileEv; //!< Filename for the covariances during evolution.
    bool ComputeCovariancesEq; //!< 1 to compute the covariances during equilibration.
    bool ComputeCovariancesEv; //!< 1 to compute the covariances during evolution.
    double EqCovariancesEvery; //!< Duration between each recording of the covariances during the equilibration (fm).
    double EvCovariancesEvery; //!< Duration between each recording of the covariances during the evolution (fm).
    int EqCovariancesEverySteps; //!< Number of steps between each recording of the covariances during the equilibration.
    int EvCovariancesEverySteps; //!< Number of steps between each recording of the covariances during the evolution.
    double EqCovariancesStart; //!< Start recording data from this time in the equilibration (fm).
    double EvCovariancesStart; //!< Start recording data from this time in the evolution (fm).
    int EqCovariancesStartSteps; //!< Start recording data from this timestep in the equilibration.
    int EvCovariancesStartSteps; //!< Start recording data from this timestep in the evolution.
    double EqCovariancesStop; //!< Stop recording data from this time in the equilibration (fm).
    double EvCovariancesStop; //!< Stop recording data from this time in the evolution (fm).
    int EqCovariancesStopSteps; //!< Stop recording data from this timestep in the equilibration.
    int EvCovariancesStopSteps; //!< Stop recording data from this timestep in the evolution.


    // Structure Factor 
    std::string StructureFactorfileEq; //!< Filename for the structure factor during equilibrium.
    std::string StructureFactorfileEv; //!< Filename for the structure factor during evolution.
    bool ComputeStructureFactorFunctionEq; //!< 1 to compute the structure factor during equilibration.
    bool ComputeStructureFactorFunctionEv; //!< 1 to compute the structure factor during evolution.
    double EqStructureFactorEvery; //!< Duration between each recording of the structure factor during the equilibration (fm).
    double EvStructureFactorEvery; //!< Duration between each recording of the structure factor during the evolution (fm).
    int EqStructureFactorEverySteps; //!< Number of steps between each recording of the structure factor during the equilibration.
    int EvStructureFactorEverySteps; //!< Number of steps between each recording of the structure factor during the evolution.
    double EqStructureFactorStart; //!< Start recording data from this time in the equilibration (fm).
    double EvStructureFactorStart; //!< Start recording data from this time in the evolution (fm).
    int EqStructureFactorStartSteps; //!< Start recording data from this timestep in the equilibration.
    int EvStructureFactorStartSteps; //!< Start recording data from this timestep in the evolution.
    double EqStructureFactorStop; //!< Stop recording data from this time in the equilibration (fm).
    double EvStructureFactorStop; //!< Stop recording data from this time in the evolution (fm).
    int EqStructureFactorStopSteps; //!< Stop recording data from this timestep in the equilibration.
    int EvStructureFactorStopSteps; //!< Stop recording data from this timestep in the evolution.

    // Intergrated Covariances
    double RapidityWindow; //!< The rapidity window Delta y (fm) on which integrated observables are calculated. If not given, calculated for all rapidity windows.
    int RapidityWindowSteps; //!< The rapidity window Delta y (steps) on which integrated observables are calculated. If not given, calculated for all rapidity windows.
    std::string IntegratedCovariancefileEq; //!< Filename for the integrated covariances during equilibrium.
    std::string IntegratedCovariancefileEv; //!< Filename for the integrated covariances during evolution.
    bool ComputeIntegratedCovariancesEq; //!< 1 to compute the integrated covariances during equilibration.
    bool ComputeIntegratedCovariancesEv; //!< 1 to compute the integrated covariances during evolution.
    double EqIntegratedCovariancesEvery; //!< Duration between each recording of the integrated covariances during the equilibration (fm).
    double EvIntegratedCovariancesEvery; //!< Duration between each recording of the integrated covariances during the evolution (fm).
    int EqIntegratedCovariancesEverySteps; //!< Number of steps between each recording of the integrated covariances during the equilibration.
    int EvIntegratedCovariancesEverySteps; //!< Number of steps between each recording of the integrated covariances during the evolution.
    double EqIntegratedCovariancesStart; //!< Start recording data from this time in the equilibration (fm).
    double EvIntegratedCovariancesStart; //!< Start recording data from this time in the evolution (fm).
    int EqIntegratedCovariancesStartSteps; //!< Start recording data from this timestep in the equilibration.
    int EvIntegratedCovariancesStartSteps; //!< Start recording data from this timestep in the evolution.
    double EqIntegratedCovariancesStop; //!< Stop recording data from this time in the equilibration (fm).
    double EvIntegratedCovariancesStop; //!< Stop recording data from this time in the evolution (fm).
    int EqIntegratedCovariancesStopSteps; //!< Stop recording data from this timestep in the equilibration.
    int EvIntegratedCovariancesStopSteps; //!< Stop recording data from this timestep in the evolution.

    // Average in rapidity windows
    std::string AveragesfileEq; //!< Filename for the averages during equilibrium.
    std::string AveragesfileEv; //!< Filename for the averages during evolution.
    bool AveragesEq; //!< 1 to compute the averages during equilibration.
    bool AveragesEv; //!< 1 to compute the averages during evolution.
    double EqAveragesEvery; //!< Duration between each recording of the averages during the equilibration (fm).
    double EvAveragesEvery; //!< Duration between each recording of the averages during the evolution (fm).
    int EqAveragesEverySteps; //!< Number of steps between each recording of the averages during the equilibration.
    int EvAveragesEverySteps; //!< Number of steps between each recording of the averages during the evolution.
    double EqAveragesStart; //!< Start recording data from this time in the equilibration (fm).
    double EvAveragesStart; //!< Start recording data from this time in the evolution (fm).
    int EqAveragesStartSteps; //!< Start recording data from this timestep in the equilibration.
    int EvAveragesStartSteps; //!< Start recording data from this timestep in the evolution.
    double EqAveragesStop; //!< Stop recording data from this time in the equilibration (fm).
    double EvAveragesStop; //!< Stop recording data from this time in the evolution (fm).
    int EqAveragesStopSteps; //!< Stop recording data from this timestep in the equilibration.
    int EvAveragesStopSteps; //!< Stop recording data from this timestep in the evolution.

    // Raw data 
    std::string RawDatafileEq; //!< Filename for the averages during equilibrium.
    std::string RawDatafileEv; //!< Filename for the averages during evolution.
    bool RawDataEq; //!< 1 to compute the averages during equilibration.
    bool RawDataEv; //!< 1 to compute the averages during evolution.
    double EqRawDataEvery; //!< Duration between each recording of the averages during the equilibration (fm).
    double EvRawDataEvery; //!< Duration between each recording of the averages during the evolution (fm).
    int EqRawDataSteps; //!< Number of steps between each recording of the averages during the equilibration.
    int EvRawDataqSteps; //!< Number of steps between each recording of the averages during the evolution.
    double EqRawDataStart; //!< Start recording data from this time in the equilibration (fm).
    double EvRawDataStart; //!< Start recording data from this time in the evolution (fm).
    int EqRawDataStartSteps; //!< Start recording data from this timestep in the equilibration.
    int EvRawDataStartSteps; //!< Start recording data from this timestep in the evolution.
    double EqRawDataStop; //!< Stop recording data from this time in the equilibration (fm).
    double EvRawDataStop; //!< Stop recording data from this time in the evolution (fm).
    int EqRawDataStopSteps; //!< Stop recording data from this timestep in the equilibration.
    int EvRawDataStopSteps; //!< Stop recording data from this timestep in the evolution.
    //flag to know what conserved charge are calculated.
    // flag record on CPU of GPU for large of small files (if files are small, only one communication with CPU at the end of the evolution).
    // estimation de la memoire requise compared to memoire GPU disponible (il faut aussi les data tabulees et autre vex vector)


    Parameters();
    bool load(std::string file);
    template<typename T>
    void extract(std::string name, T &val) const;
    template<typename T>
    void extract(std::string name, std::vector<T> &vals) const;
};

template<typename T>
void Parameters::extract(std::string name, T &val) const {
    for(auto line: lines) {
        long pos = line.find("=");
	if(line.substr(0, pos) == name) {
            std::stringstream ss(line.substr(pos+1));
            ss >> val;

            break;
        }
    }
}

    
template<typename T>
void Parameters::extract(std::string name, std::vector<T> &vals) const {
    for(auto line: lines) {
        long pos = line.find("=");
	if(line.substr(0, pos) == name) {
            std::stringstream ss(line.substr(pos+1));
            vals.clear();
            T val;
            while(ss >> val)
                vals.push_back(val);

            break;
        }
    }
}

#endif //PARAMETERS_H







}
