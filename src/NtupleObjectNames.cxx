// $Id: NtupleObjectNames.cxx 43055 2015-01-29 16:26:25Z gherbert $

// TODO:
// * provide default values instead of always having to define all names

// Local include(s):
#include "../include/NtupleObjectNames.h"

namespace Ntuple {

  NtupleObjectNames::NtupleObjectNames( const TString& ntupleType ) {

    FillMap(ntupleType);

  }

  void NtupleObjectNames::FillMap( TString ntupleType) throw( SError ) {

    //
    // depending on ntupleType fill map
    //
    
    //bw comp.
    if (ntupleType == "NtupleMakerNtuple")          ntupleType = "UZHCMSNtuple";

    if (ntupleType == "UZHCMSNtuple") {
      FillUZHCMSNtuple();
    } else {
      throw SError( "Ntuple Type '"+ntupleType+"' not defined!", SError::StopExecution );
    }
    //std::cout << "ntuple type: " << ntupleType << std::endl;
    return;

  }

  void NtupleObjectNames::FillUZHCMSNtuple() {
    
    m_names["N"] = "N";
    // general kinematics
    m_names["e"] = "e";
    m_names["pt"] = "pt";
    m_names["m"] = "mass";
    m_names["eta"] = "eta";
    m_names["phi"] = "phi";
    m_names["et"] = "et";
    m_names["charge"] = "charge";
    
    // event info
    m_names["runNumber"] = "EVENT_run";
    m_names["eventNumber"] = "EVENT_event";
    m_names["lumiBlock"] = "EVENT_lumiBlock";
    m_names["bunchCrossing"] = "bX";
    m_names["trigDecision"] = "HLT_isFired";
    m_names["averageIntPerXing"] = "nPuVtx";
    m_names["actualIntPerXing"] = "nPuVtxTrue";
    m_names["genEventWeight"] = "genWeight";
    m_names["pdf_id"] = "PDF_id";
    m_names["pdf_x"] = "PDF_x";
    m_names["pdf_xPDF"] = "PDF_xPDF";
    m_names["pdf_scale"] = "qScale";
    m_names["passFilter_HBHE"] = "passFilter_HBHE";
    m_names["passFilter_HBHEIso"] = "passFilter_HBHEIso";
    m_names["passFilter_HBHELoose"] = "passFilter_HBHELoose";
    m_names["passFilter_CSCHalo"] = "passFilter_CSCHalo";
    m_names["passFilter_HCALlaser"] = "passFilter_HCALlaser";
    m_names["passFilter_ECALDeadCell"] = "passFilter_ECALDeadCell";
    m_names["passFilter_GoodVtx"] = "passFilter_GoodVtx";
    m_names["passFilter_TrkFailure"] = "passFilter_TrkFailure";
    m_names["passFilter_EEBadSc"] = "passFilter_EEBadSc";
    m_names["passFilter_ECALlaser"] = "passFilter_ECALlaser";
    m_names["passFilter_TrkPOG"] = "passFilter_TrkPOG";
    m_names["passFilter_TrkPOG_manystrip"] = "passFilter_TrkPOG_manystrip";
    m_names["passFilter_TrkPOG_toomanystrip"] = "passFilter_TrkPOG_toomanystrip";
    m_names["passFilter_TrkPOG_logError"] = "passFilter_TrkPOG_logError";
    m_names["passFilter_METFilters"] = "passFilter_METFilters";
    m_names["PV_filter"] = "PV_filter";
    m_names["passFilter_muonBadTrack"] = "passFilter_muonBadTrack";
    m_names["passFilter_chargedHadronTrackResolution"] = "passFilter_chargedHadronTrackResolution";
    
    // gen particles
    m_names["pdgId"] = "pdgId";
    m_names["status"] = "status";
    m_names["nMoth"] = "nMoth";
    m_names["nDau"] = "nDau";
    m_names["mother"] = "mother";
    m_names["dau"] = "dau";
    
    // area
    m_names["rho"] = "rho";
    
    // missing E_T
    m_names["corrPx"] = "corrPx";
    m_names["corrPy"] = "corrPy";
    m_names["sumEt"] = "sumEt";
    
    // jets
    // flavour
    m_names["csv"] = "csv";
    m_names["flavour"] = "flavour";
    m_names["partonFlavour"] = "partonFlavour";
    m_names["hadronFlavour"] = "hadronFlavour";
    m_names["nbHadrons"] = "nbHadrons";
    m_names["ncHadrons"] = "ncHadrons";
    m_names["genParton_pdgID"] = "genParton_pdgID";
    
    // ID
    m_names["IDLoose"] = "IDLoose";
    m_names["IDTight"] = "IDTight";
    m_names["jec"] = "jec";
    m_names["jecUp"] = "jecUp";
    m_names["jecDown"] = "jecDown";
    m_names["muf"] = "muf";
    m_names["phf"] = "phf";
    m_names["emf"] = "emf";
    m_names["nhf"] = "nhf";
    m_names["chf"] = "chf";
    m_names["area"] = "area";
    m_names["cm"] = "cm";
    m_names["nm"] = "nm";
    m_names["che"] = "che";
    m_names["ne"] = "ne";
    m_names["hf_hf"] = "hf_hf";
    m_names["hf_emf"] = "hf_emf";
    m_names["hof"] = "hof";
    m_names["chm"] = "chm";
    m_names["neHadMult"] = "neHadMult";
    m_names["phoMult"] = "phoMult";
    m_names["nemf"] = "nemf";
    m_names["cemf"] = "cemf";
    
    // substructure
    m_names["tau1"] = "tau1";
    m_names["tau2"] = "tau2";
    m_names["tau3"] = "tau3";
    m_names["pruned_mass"] = "pruned_mass";
    m_names["pruned_massCorr"] = "pruned_massCorr";
    m_names["softdrop_mass"] = "softdrop_mass";
    m_names["softdrop_massCorr"] = "softdrop_massCorr";
    m_names["pruned_jec"] = "pruned_jec";
    m_names["pruned_jecUp"] = "pruned_jecUp";
    m_names["pruned_jecDown"] = "pruned_jecDown";
    m_names["softdrop_jec"] = "softdrop_jec";
    m_names["softdrop_jecUp"] = "softdrop_jecUp";
    m_names["softdrop_jecDown"] = "softdrop_jecDown";
    
    //substructure gen
    m_names["prunedmass"] = "prunedmass";
    m_names["softdropmass"] = "softdropmass";
    
    // pruned subjets
    m_names["subjet_pruned_N"] = "subjet_pruned_N";
    m_names["subjet_pruned_e"] = "subjet_pruned_e";
    m_names["subjet_pruned_pt"] = "subjet_pruned_pt";
    m_names["subjet_pruned_m"] = "subjet_pruned_mass";
    m_names["subjet_pruned_eta"] = "subjet_pruned_eta";
    m_names["subjet_pruned_phi"] = "subjet_pruned_phi";
    m_names["subjet_pruned_charge"] = "subjet_pruned_charge";
    m_names["subjet_pruned_csv"] = "subjet_pruned_csv";
    // pruned subjets flavour truth
    m_names["subjet_pruned_partonFlavour"] = "subjet_pruned_partonFlavour";
    m_names["subjet_pruned_hadronFlavour"] = "subjet_pruned_hadronFlavour";
    m_names["subjet_pruned_nbHadrons"] = "subjet_pruned_nbHadrons";
    m_names["subjet_pruned_ncHadrons"] = "subjet_pruned_ncHadrons";
    m_names["subjet_pruned_genParton_pdgID"] = "subjet_pruned_genParton_pdgID";
    
    // softdrop subjets
    m_names["subjet_softdrop_N"] = "subjet_softdrop_N";
    m_names["subjet_softdrop_e"] = "subjet_softdrop_e";
    m_names["subjet_softdrop_pt"] = "subjet_softdrop_pt";
    m_names["subjet_softdrop_m"] = "subjet_softdrop_mass";
    m_names["subjet_softdrop_eta"] = "subjet_softdrop_eta";
    m_names["subjet_softdrop_phi"] = "subjet_softdrop_phi";
    m_names["subjet_softdrop_charge"] = "subjet_softdrop_charge";
    m_names["subjet_softdrop_csv"] = "subjet_softdrop_csv";
    // softdrop subjets flavour truth
    m_names["subjet_softdrop_partonFlavour"] = "subjet_softdrop_partonFlavour";
    m_names["subjet_softdrop_hadronFlavour"] = "subjet_softdrop_hadronFlavour";
    m_names["subjet_softdrop_nbHadrons"] = "subjet_softdrop_nbHadrons";
    m_names["subjet_softdrop_ncHadrons"] = "subjet_softdrop_ncHadrons";
    m_names["subjet_softdrop_genParton_pdgID"] = "subjet_softdrop_genParton_pdgID";

    // leptons
    m_names["trackIso"] = "trackIso";
    m_names["pfRhoCorrRelIso03"] = "pfRhoCorrRelIso03";
    m_names["pfRhoCorrRelIso04"] = "pfRhoCorrRelIso04";
    m_names["pfDeltaCorrRelIso"] = "pfDeltaCorrRelIso";
    m_names["pfRelIso"] = "pfRelIso";
    m_names["photonIso"] = "photonIso";
    m_names["neutralHadIso"] = "neutralHadIso";
    m_names["chargedHadIso"] = "chargedHadIso";
    
    // electrons
    m_names["isVetoElectron"] = "isVetoElectron";
    m_names["isMediumElectron"] = "isMediumElectron";
    m_names["isTightElectron"] = "isTightElectron";
    m_names["isHeepElectron"] = "isHeepElectron";
    m_names["isHeep51Electron"] = "isHeep51Electron";
    m_names["isLooseElectron"] = "isLooseElectron";

    m_names["superCluster_eta"] = "superCluster_eta";
    m_names["superCluster_e"] = "superCluster_e";

    m_names["passConversionVeto"] = "passConversionVeto";
    m_names["full5x5_sigmaIetaIeta"] = "full5x5_sigmaIetaIeta";
    m_names["dEtaIn"] = "dEtaIn";
    m_names["dPhiIn"] = "dPhiIn";
    m_names["hOverE"] = "hOverE";
    m_names["relIsoWithDBeta"] = "relIsoWithDBeta";
    m_names["ooEmooP"] = "ooEmooP";
    m_names["expectedMissingInnerHits"] = "expectedMissingInnerHits";
    m_names["dr03EcalRecHitSumEt"] = "dr03EcalRecHitSumEt";
    m_names["dr03HcalDepth1TowerSumEt"] = "dr03HcalDepth1TowerSumEt";
    m_names["ecalDriven"] = "ecalDriven";
    m_names["dEtaInSeed"] = "dEtaInSeed";
    m_names["full5x5_e2x5Max"] = "full5x5_e2x5Max";
    m_names["full5x5_e5x5"] = "full5x5_e5x5";
    m_names["full5x5_e1x5"] = "full5x5_e1x5";
    m_names["dr03TkSumPt"] = "dr03TkSumPt";
    m_names["hadronicOverEm"] = "hadronicOverEm";

    m_names["isVetoElectronBoosted"] = "isVetoElectronBoosted";
    m_names["isMediumElectronBoosted"] = "isMediumElectronBoosted";
    m_names["isTightElectronBoosted"] = "isTightElectronBoosted";
    m_names["isHeepElectronBoosted"] = "isHeepElectronBoosted";
    m_names["isHeep51ElectronBoosted"] = "isHeep51ElectronBoosted";
    m_names["isLooseElectronBoosted"] = "isLooseElectronBoosted";
    
    // muons
    m_names["isHighPtMuon"] = "isHighPtMuon";
    m_names["isLooseMuon"] = "isLooseMuon";
    m_names["isTightMuon"] = "isTightMuon";
    m_names["isPFMuon"] = "isPFMuon";
    m_names["isGlobalMuon"] = "isGlobalMuon";
    m_names["isSoftMuon"] = "isSoftMuon";

    // tracking
    m_names["d0"] = "d0";
    m_names["dz"] = "dz";
    m_names["bestTrack_pt"] = "bestTrack_pt";
    m_names["bestTrack_ptErr"] = "bestTrack_ptErr";
    m_names["trackerHits"] = "trackerHits";
    m_names["matchedStations"] = "matchedStations";
    m_names["pixelHits"] = "pixelHits";
    m_names["globalHits"] = "globalHits";
    m_names["normChi2"] = "normChi2";

    // boosted ID
    m_names["pfRhoCorrRelIso03Boost"] = "pfRhoCorrRelIso03Boost";
    m_names["pfRhoCorrRelIso04Boost"] = "pfRhoCorrRelIso04Boost";
    m_names["pfDeltaCorrRelIsoBoost"] = "pfDeltaCorrRelIsoBoost";
    m_names["pfRelIsoBoost"] = "pfRelIsoBoost";
    m_names["photonIsoBoost"] = "photonIsoBoost";
    m_names["neutralHadIsoBoost"] = "neutralHadIsoBoost";
    m_names["chargedHadIsoBoost"] = "chargedHadIsoBoost";
    m_names["SemileptonicPFIso"] = "SemileptonicPFIso";
    m_names["SemileptonicCorrPFIso"] = "SemileptonicCorrPFIso";
    
    
  }

  TString NtupleObjectNames::getName( const TString& name ) {

    // check if key exists
    std::map<TString, TString>::iterator found = m_names.find( name ); // Search for key
    if ( found != m_names.end() ) {
      return m_names[name];
    } else {
      //m_logger << WARNING << "NtupleObjectName" << name << "not found in map" << SLogger::endmsg;
      std::cout << "WARNING: NtupleObjectName " << name << " not found in map" << std::endl;
      return name;
    }

  }


  TString NtupleObjectNames::getPrefix( const TString& name ) {

    // check if key exists
    std::map<TString, TString>::iterator found = m_prefixes.find( name ); // Search for key
    if ( found != m_prefixes.end() ) {
      return m_prefixes[name];
    } else {
      throw SError( Form("NtupleObjectName %s not available!", name.Data()), SError::StopExecution );
    }

  }


} // namespace Ntuple
