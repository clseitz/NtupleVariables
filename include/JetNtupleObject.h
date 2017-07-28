// Dear emacs, this is -*- c++ -*-
// $Id: JetNtupleObject.h 37457 2010-07-05 12:04:33Z mann $

// THIS FILE HAS BEEN GENERATED AUTOMATICALLY. DO NOT EDIT DIRECTLY, CHANGES WILL BE LOST UPON NEXT CODE GENERATION.
// Code produced by Id: CodeIt.py 494 2010-07-30 13:41:32Z svn 


#ifndef SFRAME_NtupleVARIABLES_JetNtupleObject_H
#define SFRAME_NtupleVARIABLES_JetNtupleObject_H

// Local include(s):
#include "NtupleObjectNames.h"

// STL include(s):
#include <vector>
#include <string>

// ROOT include(s):
#include <TString.h>

// SFrame include(s):
#include "core/include/SError.h"
#include "core/include/SCycleBaseNTuple.h"
#include "plug-ins/include/SInputVariables.h"

namespace Ntuple {

  /**
  *  @short Class that can read the variables produced by JetNtupleObject
  *
  *         This class can be used to read the offline muon information from
  *         an ntuple produced by the SingleTopDPDMaker code.
  *
  * @author Code produced by Id: CodeIt.py 494 2010-07-30 13:41:32Z svn   
  *
  */
  
  enum JetDetails {
    JetSubstructure = 1,
    JetPrunedSubjetsTruth = 2,
    JetSoftdropSubjets = 4,
    JetSoftdropSubjetsTruth = 8,
    JetPrunedSubjets = 16,
    JetAnalysis = 32,
    JetTruth = 64,
    JetBasic = 128,
    JetAll = 255,
    GenJet = 512,

  };
  
  // forward declaration of NtupleObjectNames
  class NtupleObjectNames;
  class JetNtupleObject : public SInputVariables< SCycleBaseNTuple > {

    public:
    /// Constructor specifying the parent of the object
    JetNtupleObject( SCycleBaseNTuple* parent );

    /// remember if connect succeeded
    void setConnectSucceeded(const unsigned int index, const bool success);
    bool getConnectSucceeded(const unsigned int index) const {return m_connectsucceeded.at(index);}  

    /// Connect the variables to the input branches
    void ConnectVariables( const TString& treeName,
                           UInt_t detail_level = 0,
                           const TString& prefix = "Jet_",
                           const TString& ntupleType = "NtupleMakerNtuple" ) throw( SError );

    void ConnectVariables( const TString& treeName,
                           const TString& prefix = "Jet_",
                           const TString& ntupleType = "NtupleMakerNtuple" ) throw( SError );

    int getDetailLevel() const {return detailLevel;}   


    // particle vector size
    Int_t                   N;
   
    enum ConnectionIndex { 
     kIDLoose=3, 
     kIDTight=4, 
     kjec=5, 
     kjecUp=6, 
     kjecDown=7, 
     kmuf=8, 
     kphf=9, 
     kemf=10, 
     knhf=11, 
     kchf=12, 
     karea=13, 
     kcm=14, 
     knm=15, 
     kche=16, 
     kne=17, 
     khf_hf=18, 
     khf_emf=19, 
     khof=20, 
     kchm=21, 
     kneHadMult=22, 
     kphoMult=23, 
     knemf=24, 
     kcemf=25, 
     kcsv=1, 
     kcharge=2, 
     ksubjet_pruned_N=42, 
     ksubjet_pruned_pt=43, 
     ksubjet_pruned_eta=44, 
     ksubjet_pruned_phi=45, 
     ksubjet_pruned_e=46, 
     ksubjet_pruned_m=47, 
     ksubjet_pruned_csv=48, 
     ksubjet_pruned_charge=49, 
     ksubjet_pruned_partonFlavour=50, 
     ksubjet_pruned_hadronFlavour=51, 
     ksubjet_pruned_genParton_pdgID=52, 
     ksubjet_pruned_nbHadrons=53, 
     ksubjet_pruned_ncHadrons=54, 
     ksubjet_softdrop_N=55, 
     ksubjet_softdrop_pt=56, 
     ksubjet_softdrop_eta=57, 
     ksubjet_softdrop_phi=58, 
     ksubjet_softdrop_e=59, 
     ksubjet_softdrop_m=60, 
     ksubjet_softdrop_csv=61, 
     ksubjet_softdrop_charge=62, 
     ksubjet_softdrop_partonFlavour=63, 
     ksubjet_softdrop_hadronFlavour=64, 
     ksubjet_softdrop_genParton_pdgID=65, 
     ksubjet_softdrop_nbHadrons=66, 
     ksubjet_softdrop_ncHadrons=67, 
     ktau1=26, 
     ktau2=27, 
     ktau3=28, 
     kpruned_mass=29, 
     kpruned_massCorr=30, 
     ksoftdrop_mass=31, 
     ksoftdrop_massCorr=32, 
     kpruned_jec=33, 
     kpruned_jecUp=34, 
     kpruned_jecDown=35, 
     ksoftdrop_jec=36, 
     kpartonFlavour=37, 
     khadronFlavour=38, 
     kgenParton_pdgID=39, 
     knbHadrons=40, 
     kncHadrons=41, 
     kprunedmass=68,
     ksoftdropmass=69,
      kEnd 
    }; 


    // vectors of properties defined in Particle.h
    std::vector< floatingnumber >  *e;
    std::vector< floatingnumber >  *pt;
    std::vector< floatingnumber >  *eta;
    std::vector< floatingnumber >  *phi;
    std::vector< floatingnumber >  *m;
    

    
    // vectors of object specific variables
    std::vector< bool >  *IDLoose;
    std::vector< bool >  *IDTight;
    std::vector< floatingnumber >  *jec;
    std::vector< floatingnumber >  *jecUp;
    std::vector< floatingnumber >  *jecDown;
    std::vector< floatingnumber >  *muf;
    std::vector< floatingnumber >  *phf;
    std::vector< floatingnumber >  *emf;
    std::vector< floatingnumber >  *nhf;
    std::vector< floatingnumber >  *chf;
    std::vector< floatingnumber >  *area;
    std::vector< int >  *cm;
    std::vector< int >  *nm;
    std::vector< floatingnumber >  *che;
    std::vector< floatingnumber >  *ne;
    std::vector< floatingnumber >  *hf_hf;
    std::vector< floatingnumber >  *hf_emf;
    std::vector< floatingnumber >  *hof;
    std::vector< int >  *chm;
    std::vector< int >  *neHadMult;
    std::vector< int >  *phoMult;
    std::vector< floatingnumber >  *nemf;
    std::vector< floatingnumber >  *cemf;
    std::vector< floatingnumber >  *csv;
    std::vector< int >  *charge;
    std::vector< int >  *subjet_pruned_N;
    std::vector< std::vector<floatingnumber> >  *subjet_pruned_pt;
    std::vector< std::vector<floatingnumber> >  *subjet_pruned_eta;
    std::vector< std::vector<floatingnumber> >  *subjet_pruned_phi;
    std::vector< std::vector<floatingnumber> >  *subjet_pruned_e;
    std::vector< std::vector<floatingnumber> >  *subjet_pruned_m;
    std::vector< std::vector<floatingnumber> >  *subjet_pruned_csv;
    std::vector< std::vector<int> >  *subjet_pruned_charge;
    std::vector< std::vector<int> >  *subjet_pruned_partonFlavour;
    std::vector< std::vector<int> >  *subjet_pruned_hadronFlavour;
    std::vector< std::vector<int> >  *subjet_pruned_genParton_pdgID;
    std::vector< std::vector<int> >  *subjet_pruned_nbHadrons;
    std::vector< std::vector<int> >  *subjet_pruned_ncHadrons;
    std::vector< int >  *subjet_softdrop_N;
    std::vector< std::vector<floatingnumber> >  *subjet_softdrop_pt;
    std::vector< std::vector<floatingnumber> >  *subjet_softdrop_eta;
    std::vector< std::vector<floatingnumber> >  *subjet_softdrop_phi;
    std::vector< std::vector<floatingnumber> >  *subjet_softdrop_e;
    std::vector< std::vector<floatingnumber> >  *subjet_softdrop_m;
    std::vector< std::vector<floatingnumber> >  *subjet_softdrop_csv;
    std::vector< std::vector<int> >  *subjet_softdrop_charge;
    std::vector< std::vector<int> >  *subjet_softdrop_partonFlavour;
    std::vector< std::vector<int> >  *subjet_softdrop_hadronFlavour;
    std::vector< std::vector<int> >  *subjet_softdrop_genParton_pdgID;
    std::vector< std::vector<int> >  *subjet_softdrop_nbHadrons;
    std::vector< std::vector<int> >  *subjet_softdrop_ncHadrons;
    std::vector< floatingnumber >  *tau1;
    std::vector< floatingnumber >  *tau2;
    std::vector< floatingnumber >  *tau3;
    std::vector< floatingnumber >  *pruned_mass;
    std::vector< floatingnumber >  *pruned_massCorr;
    std::vector< floatingnumber >  *softdrop_mass;
    std::vector< floatingnumber >  *softdrop_massCorr;
    std::vector< floatingnumber >  *pruned_jec;
    std::vector< floatingnumber >  *pruned_jecUp;
    std::vector< floatingnumber >  *pruned_jecDown;
    std::vector< floatingnumber >  *softdrop_jec;
    std::vector< int >  *partonFlavour;
    std::vector< int >  *hadronFlavour;
    std::vector< int >  *genParton_pdgID;
    std::vector< int >  *nbHadrons;
    std::vector< int >  *ncHadrons;
    std::vector< floatingnumber >  *prunedmass;
    std::vector< floatingnumber >  *softdropmass;


    std::vector<int> m_connectsucceeded;

    // save actual detail level and group
    Int_t detailLevel;
    std::string detailGroup;

  }; // class JetNtupleObject

} // namespace Ntuple

#endif // SFRAME_NtupleVARIABLES_JetNtupleObject_H
