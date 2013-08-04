<?php

/**
 * @file
 * The default format for Thailand address.
 */

$plugin = array(
  'title' => t('Address form (specific for Thailand)'),
  'format callback' => 'addressfield_th_format_address_generate',
  'type' => 'address',
  'weight' => -100,
);

/**
 * Format callback for Thailand address.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_th_format_address_generate(&$format, $address, $context = array()) {
  if ($address['country'] == 'TH') {
    unset($format['locality_block']['administrative_area']);

    $format['locality_block']['locality'] = array(
      '#title' => t('City/Province'),
      '#options' => _addressfield_th_city_list(),
      '#required' => TRUE,
      '#attributes' => array('class' => array('locality')),
      '#weight' => 1,
    );
    $format['locality_block']['dependent_locality'] = array(
      '#title' => t('District'),
      '#size' => 20,
      '#tag' => 'div',
      '#attributes' => array('class' => array('dependent', 'district')),
      '#weight' => 2,
    );
    $format['locality_block']['postal_code'] = array(
      '#title' => t('Postal Code'),
      '#size' => 10,
      '#required' => TRUE,
      '#attributes' => array('class' => array('postal-code')),
      '#weight' => 3,
    );
    // Default district
    // 
    // 
  if ($address['locality'] == 1) {
         $format['locality_block']['dependent_locality']['#options'] = array(
          t('Khet Phra Nakhon'),
          t('Khet Dusit'),
          t('Khet Nong Chok'),
          t('Khet Bang Rak'),
          t('Khet Bang Khen'),
          t('Khet Bang Kapi'),
          t('Khet Pathum Wan'),
          t('Khet Pom Prap Sattru Phai'),
          t('Khet Phra Khanong'),
          t('Khet Min Buri'),
          t('Khet Lat Krabang'),
          t('Khet Yan Nawa'),
          t('Khet Samphanthawong'),
          t('Khet Phaya Thai'),
          t('Khet Thon Buri'),
          t('Khet Bangkok Yai'),
          t('Khet Huai Khwang'),
          t('Khet Khlong San'),
          t('Khet Taling Chan'),
          t('Khet Bangkok Noi'),
          t('Khet Bang Khun Thian'),
          t('Khet Phasi Charoen'),
          t('Khet Nong Khaem'),
          t('Khet Rat Burana'),
          t('Khet Bang Phlat'),
          t('Khet Din Daeng'),
          t('Khet Bueng Kum'),
          t('Khet Sathon'),
          t('Khet Bang Sue'),
          t('Khet Chatuchak'),
          t('Khet Bang Kho Laem'),
          t('Khet Prawet'),
          t('Khet Khlong Toei'),
          t('Khet Suan Luang'),
          t('Khet Chom Thong'),
          t('Khet Don Mueang'),
          t('Khet Ratchathewi'),
          t('Khet Lat Phrao'),
          t('Khet Watthana'),
          t('Khet Bang Khae'),
          t('Khet Lak Si'),
          t('Khet Sai Mai'),
          t('Khet Khan Na Yao'),
          t('Khet Saphan Sung'),
          t('Khet Wang Thonglang'),
          t('Khet Khlong Sam Wa'),
          t('Khet Bang Na'),
          t('Khet Thawi Watthana'),
          t('Khet Thung Khru'),
          t('Khet Bang Bon'),
          t('*Bantawai'),
      );
} elseif ($address['locality'] == 2) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Samut Prakan'),
  t('Bang Bo'),
  t('Bang Phli'),
  t('Phra Pradaeng'),
  t('Phra Samut Chedi'),
  t('Bang Sao Thong'),
      );
} elseif ($address['locality'] == 3) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Nonthaburi'),
  t('Bang Kruai'),
  t('Bang Yai'),
  t('Bang Bua Thong'),
  t('Sai Noi'),
  t('Pak Kret'),
  t('Tetsaban Nonthaburi'),
  t('Tetsaban Pak Kret'),
      );
} elseif ($address['locality'] == 4) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Pathum Thani'),
  t('Khlong Luang'),
  t('Thanyaburi'),
  t('Nong Suea'),
  t('Lat Lum Kaeo'),
  t('Lam Luk Ka'),
  t('Sam Khok'),
  t('Khlong Luang(Kukod)'),
      );
} elseif ($address['locality'] == 5) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Phra Nakhon Si Ayutthaya'),
  t('Tha Ruea'),
  t('Nakhon Luang'),
  t('Bang Sai'),
  t('Bang Ban'),
  t('Bang Pa-in'),
  t('Bang Pahan'),
  t('Phak Hai'),
  t('Phachi'),
  t('Lat Bua Luang'),
  t('Wang Noi'),
  t('Sena'),
  t('Bang Sai'),
  t('Uthai'),
  t('Maha Rat'),
  t('Ban Phraek'),
      );
} elseif ($address['locality'] == 6) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Ang Thong'),
  t('Chaiyo'),
  t('Pa Mok'),
  t('Pho Thong'),
  t('Sawaeng Ha'),
  t('Wiset Chai Chan'),
  t('Samko'),
      );
} elseif ($address['locality'] == 7) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Lop Buri'),
  t('Phatthana Nikhom'),
  t('Khok Samrong'),
  t('Chai Badan'),
  t('Tha Wung'),
  t('Ban Mi'),
  t('Tha Luang'),
  t('Sa Bot'),
  t('Khok Charoen'),
  t('Lam Sonthi'),
  t('Nong Muang'),
  t('*Amphoe Ban Chao'),
      );
} elseif ($address['locality'] == 8) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Sing Buri'),
  t('Bang Rachan'),
  t('Khai Bang Rachan'),
  t('Phrom Buri'),
  t('Tha Chang'),
  t('In Buri'),
      );
} elseif ($address['locality'] == 9) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Chai Nat'),
  t('Manorom'),
  t('Wat Sing'),
  t('Sapphaya'),
  t('Sankhaburi'),
  t('Hankha'),
  t('Nong Mamong'),
  t('Noen Kham'),
      );
} elseif ($address['locality'] == 10) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Saraburi'),
  t('Kaeng Khoi'),
  t('Nong Khae'),
  t('Wihan Daeng'),
  t('Nong Saeng'),
  t('Ban Mo'),
  t('Don Phut'),
  t('Nong Don'),
  t('Phra Phutthabat'),
  t('Sao Hai'),
  t('Muak Lek'),
  t('Wang Muang'),
  t('Chaloem Phra Kiat'),
      );
 } elseif ($address['locality'] == 11) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Chon Buri'),
  t('Ban Bueng'),
  t('Nong Yai'),
  t('Bang Lamung'),
  t('Phan Thong'),
  t('Phanat Nikhom'),
  t('Si Racha'),
  t('Ko Sichang'),
  t('Sattahip'),
  t('Bo Thong'),
  t('Ko Chan'),
  t('Sattahip(Bang Sre)*'),
  t('Tong Tin Tetsaban Mueang Nong Prue*'),
  t('Tetsaban Tambon Lamsabang*'),
  t('Mueang Chon Buri'),
      );
} elseif ($address['locality'] == 12) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Rayong'),
  t('Ban Chang'),
  t('Klaeng'),
  t('Wang Chan'),
  t('Ban Khai'),
  t('Pluak Daeng'),
  t('Khao Chamao'),
  t('Nikhom Phatthana'),
  t('Saka Tambon Mabka'),
      );
} elseif ($address['locality'] == 13) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Chanthaburi'),
  t('Khlung'),
  t('Tha Mai'),
  t('Pong Nam Ron'),
  t('Makham'),
  t('Laem Sing'),
  t('Soi Dao'),
  t('Kaeng Hang Maeo'),
  t('Na Yai Am'),
  t('Khoa Khitchakut'),
  t('*King Amphoe Kampud'),
      );
} elseif ($address['locality'] == 14) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Trat'),
  t('Khlong Yai'),
  t('Khao Saming'),
  t('Bo Rai'),
  t('Laem Ngop'),
  t('Ko Kut'),
  t('Ko Chang'),
      );
} elseif ($address['locality'] == 15) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Chachoengsao'),
  t('Bang Khla'),
  t('Bang Nam Priao'),
  t('Bang Pakong'),
  t('Ban Pho'),
  t('Phanom Sarakham'),
  t('Ratchasan'),
  t('Sanam Chai Khet'),
  t('Plaeng Yao'),
  t('Tha Takiap'),
  t('Khlong Khuean'),
      );
} elseif ($address['locality'] == 16) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Prachin Buri'),
  t('Kabin Buri'),
  t('Na Di'),
  t('Sa Kaeo'),
  t('Wang Nam Yen'),
  t('Ban Sang'),
  t('Prachantakham'),
  t('Si Maha Phot'),
  t('Si Mahosot'),
  t('Aranyaprathet'),
  t('Ta Phraya'),
  t('Watthana Nakhon'),
  t('Khlong Hat'),
      );
} elseif ($address['locality'] == 17) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Nakhon Nayok'),
  t('Pak Phli'),
  t('Ban Na'),
  t('Ongkharak'),
      );
} elseif ($address['locality'] == 18) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Sa Kaeo'),
  t('Khlong Hat'),
  t('Ta Phraya'),
  t('Wang Nam Yen'),
  t('Watthana Nakhon'),
  t('Aranyaprathet'),
  t('Khao Chakan'),
  t('Khok Sung'),
  t('Wang Sombun'),
      );
} elseif ($address['locality'] == 19) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Nakhon Ratchasima'),
  t('Khon Buri'),
  t('Soeng Sang'),
  t('Khong'),
  t('Ban Lueam'),
  t('Chakkarat'),
  t('Chok Chai'),
  t('Dan Khun Thot'),
  t('Non Thai'),
  t('Non Sung'),
  t('Kham Sakaesaeng'),
  t('Bua Yai'),
  t('Prathai'),
  t('Pak Thong Chai'),
  t('Phimai'),
  t('Huai Thalaeng'),
  t('Chum Phuang'),
  t('Sung Noen'),
  t('Kham Thale So'),
  t('Sikhio'),
  t('Pak Chong'),
  t('Nong Bunnak'),
  t('Kaeng Sanam Nang'),
  t('Non Daeng'),
  t('Wang Nam Khiao'),
  t('Thepharak'),
  t('Mueang Yang'),
  t('Phra Thong Kham'),
  t('Lam Thamenchai'),
  t('Bua Lai'),
  t('Sida'),
  t('Chaloem Phra Kiat'),
  t('Pho Krang'),
  t('Ma Ka-Pon Songkram*'),
  t('*Non Lao'),
      );
 } elseif ($address['locality'] == 20) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Buri Ram'),
  t('Khu Mueang'),
  t('Krasang'),
  t('Nang Rong'),
  t('Nong Ki'),
  t('Lahan Sai'),
  t('Prakhon Chai'),
  t('Ban Kruat'),
  t('Phutthaisong'),
  t('Lam Plai Mat'),
  t('Satuek'),
  t('Pakham'),
  t('Na Pho'),
  t('Nong Hong'),
  t('Phlapphla Chai'),
  t('Huai Rat'),
  t('Non Suwan'),
  t('Chamni'),
  t('Ban Mai Chaiyaphot'),
  t('Din Daeng'),
  t('Ban Dan'),
  t('Khaen Dong'),
  t('Chaloem Phra Kiat'),

      );
 } elseif ($address['locality'] == 21) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Surin'),
  t('Chumphon Buri'),
  t('Tha Tum'),
  t('Chom Phra'),
  t('Prasat'),
  t('Kap Choeng'),
  t('Rattanaburi'),
  t('Sanom'),
  t('Sikhoraphum'),
  t('Sangkha'),
  t('Lamduan'),
  t('Samrong Thap'),
  t('Buachet'),
  t('Phanom Dong Rak'),
  t('Si Narong'),
  t('Khwao Sinarin'),
  t('Non Narai'),
      );
} elseif ($address['locality'] == 22) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Si Sa Ket'),
  t('Yang Chum Noi'),
  t('Kanthararom'),
  t('Kantharalak'),
  t('Khukhan'),
  t('Phrai Bueng'),
  t('Prang Ku'),
  t('Khun Han'),
  t('Rasi Salai'),
  t('Uthumphon Phisai'),
  t('Bueng Bun'),
  t('Huai Thap Than'),
  t('Non Khun'),
  t('Si Rattana'),
  t('Si Rattana'),
  t('Wang Hin'),
  t('Phu Sing'),
  t('Mueang Chan'),
  t('Benchalak'),
  t('Phayu'),
  t('Pho Si Suwan'),
  t('Sila Lat'),
      );
} elseif ($address['locality'] == 23) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Ubon Ratchathani'),
  t('Si Mueang Mai'),
  t('Khong Chiam'),
  t('Khueang Nai'),
  t('Khemarat'),
  t('*Shanuman'),
  t('Det Udom'),
  t('Na Chaluai'),
  t('Nam Yuen'),
  t('Buntharik'),
  t('Trakan Phuet Phon'),
  t('Kut Khaopun'),
  t('*Phana'),
  t('Muang Sam Sip'),
  t('Warin Chamrap'),
  t('*Amnat Charoen'),
  t('*Senangkhanikhom'),
  t('*Hua Taphan'),
  t('Phibun Mangsahan'),
  t('Tan Sum'),
  t('Pho Sai'),
  t('Samrong'),
  t('*King Amphoe Lue Amnat'),
  t('Don Mot Daeng'),
  t('Sirindhorn'),
  t('Thung Si Udom'),
  t('*Pathum Ratchawongsa'),
  t('*King Amphoe Sri Lunk Chai'),
  t('Na Yia'),
  t('Na Tan'),
  t('Lao Suea Kok'),
  t('Sawang Wirawong'),
  t('Nam Khun'),
  t('*Suwan Wari'),
      );
} elseif ($address['locality'] == 24) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Yasothon'),
  t('Sai Mun'),
  t('Kut Chum'),
  t('Kham Khuean Kaeo'),
  t('Pa Tio'),
  t('Maha Chana Chai'),
  t('Kho Wang'),
  t('Loeng Nok Tha'),
  t('Thai Charoen'),
      );
} elseif ($address['locality'] == 25) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Chaiyaphum'),
  t('Ban Khwao'),
  t('Khon Sawan'),
  t('Kaset Sombun'),
  t('Nong Bua Daeng'),
  t('Chatturat'),
  t('Bamnet Narong'),
  t('Nong Bua Rawe'),
  t('Thep Sathit'),
  t('Phu Khiao'),
  t('Ban Thaen'),
  t('Kaeng Khro'),
  t('Khon San'),
  t('Phakdi Chumphon'),
  t('Noen Sa-nga'),
  t('Sap Yai'),
  t('Mueang Chaiyaphum(Non Sumran)*'),
  t('Ban Wha Tao*'),
  t('Nong Bua Daeng'),
  t('King Amphoe Sap Yai*'),
  t('Coke Phet*'),
  t('Thep Sathit*'),
  t('Ban Thaen'),
  t('Kaeng Khro*'),
  t('Khon San*'),
      );
  } elseif ($address['locality'] == 26) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Amnat Charoen'),
  t('Chanuman'),
  t('Pathum Ratchawongsa'),
  t('Phana'),
  t('Senangkhanikhom'),
  t('Hua Taphan'),
  t('Lue Amnat'),
      );
} elseif ($address['locality'] == 27) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Nong Bua Lam Phu'),
  t('Na Klang'),
  t('Non Sang'),
  t('Si Bun Rueang'),
  t('Suwannakhuha'),
  t('Na Wang'),
      );
} elseif ($address['locality'] == 28) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Khon Kaen'),
  t('Ban Fang'),
  t('Phra Yuen'),
  t('Nong Ruea'),
  t('Chum Phae'),
  t('Si Chomphu'),
  t('Nam Phong'),
  t('Ubolratana'),
  t('Kranuan'),
  t('Ban Phai'),
  t('Pueai Noi'),
  t('Phon'),
  t('Waeng Yai'),
  t('Waeng Noi'),
  t('Nong Song Hong'),
  t('Phu Wiang'),
  t('Mancha Khiri'),
  t('Chonnabot'),
  t('Khao Suan Kwang'),
  t('Phu Pha Man'),
  t('Sam Sung'),
  t('Khok Pho Chai'),
  t('Nong Na Kham'),
  t('Ban Haet'),
  t('Non Sila'),
  t('Wiang Kao'),
  t('Ban Pet*'),
  t('Tet Saban Tambon Muang Phon*'),
      );
} elseif ($address['locality'] == 29) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Udon Thani'),
  t('Kut Chap'),
  t('Nong Wua So'),
  t('Kumphawapi'),
  t('Non Sa-at'),
  t('Nong Han'),
  t('Thung Fon'),
  t('Chai Wan'),
  t('Si That'),
  t('Wang Sam Mo'),
  t('Ban Dung'),
  t('*Nong Bua Lam Phu'),
  t('*Si Bun Rueang'),
  t('*Na Klang'),
  t('*Suwannakhuha'),
  t('*Non Sang'),
  t('Ban Phue'),
  t('Nam Som'),
  t('Phen'),
  t('Sang Khom'),
  t('Nong Saeng'),
  t('Na Yung'),
  t('Phibun Rak'),
  t('Ku Kaeo'),
  t('rachak-sinlapakhom'),
      );
} elseif ($address['locality'] == 30) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Loei'),
  t('Na Duang'),
  t('Chiang Khan'),
  t('Pak Chom'),
  t('Dan Sai'),
  t('Na Haeo'),
  t('Phu Ruea'),
  t('Tha Li'),
  t('Wang Saphung'),
  t('Phu Kradueng'),
  t('Phu Luang'),
  t('Pha Khao'),
  t('Erawan'),
  t('Nong Hin'),
      );
} elseif ($address['locality'] == 31) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Nong Khai'),
  t('Tha Bo'),
  t('Phon Phisai'),
  t('Si Chiang Mai'),
  t('Sangkhom'),
  t('Sakhrai'),
  t('Fao Rai'),
  t('Rattanawapi'),
  t('Pho Tak'),
      );
} elseif ($address['locality'] == 32) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Maha Sarakham'),
  t('Kae Dam'),
  t('Kosum Phisai'),
  t('Kantharawichai'),
  t('Kantharawichai'),
  t('Borabue'),
  t('Na Chueak'),
  t('Phayakkhaphum Phisai'),
  t('Wapi Pathum'),
  t('Na Dun'),
  t('Yang Sisurat'),
  t('Kut Rang'),
  t('Chuen Chom'),
  t('*Lub'),
      );
} elseif ($address['locality'] == 33) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Roi Et'),
  t('Kaset Wisai'),
  t('Pathum Rat'),
  t('Chaturaphak Phiman'),
  t('Thawat Buri'),
  t('Phanom Phrai'),
  t('Phon Thong'),
  t('Pho Chai'),
  t('Nong Phok'),
  t('Selaphum'),
  t('Suwannaphum'),
  t('Mueang Suang'),
  t('Phon Sai'),
  t('At Samat'),
  t('Moei Wadi'),
  t('Si Somdet'),
  t('Changhan'),
  t('Chiang Khwan'),
  t('Nong Hi'),
  t('Thung Khao Luangก'),
      );
 } elseif ($address['locality'] == 34) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Kalasin'),
  t('Na Mon'),
  t('Kamalasai'),
  t('Rong Kham'),
  t('Kuchinarai'),
  t('Khao Wong'),
  t('Yang Talat'),
  t('Huai Mek'),
  t('Sahatsakhan'),
  t('Kham Muang'),
  t('Tha Khantho'),
  t('Nong Kung Si'),
  t('Somdet'),
  t('Huai Phueng'),
  t('Sam Chai'),
  t('Na Khu'),
  t('Don Chan'),
  t('Khong Chai'),
      );
} elseif ($address['locality'] == 35) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Sakon Nakhon'),
  t('Kusuman'),
  t('Kut Bak'),
  t('Phanna Nikhom'),
  t('Phang Khon'),
  t('Waritchaphum'),
  t('Nikhom Nam Un'),
  t('Wanon Niwat'),
  t('Kham Ta Kla'),
  t('Ban Muang'),
  t('Akat Amnuai'),
  t('Sawang Daen Din'),
  t('Song Dao'),
  t('Tao Ngoi'),
  t('Khok Si Suphan'),
  t('Charoen Sin'),
  t('Phon Na Kaeo'),
  t('Phu Phan'),
  t('Wanon Niwat'),
  t('*Banhan'),
      );
} elseif ($address['locality'] == 36) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Nakhon Phanom'),
  t('Pla Pak'),
  t('Tha Uthen'),
  t('Ban Phaeng'),
  t('That Phanom'),
  t('Renu Nakhon'),
  t('Na Kae'),
  t('Si Songkhram'),
  t('Na Wa'),
  t('Phon Sawan'),
  t('Na Thom'),
  t('Wang Yang'),
      );
} elseif ($address['locality'] == 37) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Mukdahan'),
  t('Nikhom Kham Soi'),
  t('Don Tan'),
  t('Dong Luang'),
  t('Khamcha-i'),
  t('Wan Yai'),
  t('Nong Sung'),
      );
} elseif ($address['locality'] == 38) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Chiang Mai'),
  t('Chom Thong'),
  t('Mae Chaem'),
  t('Chiang Dao'),
  t('Doi Saket'),
  t('Mae Taeng'),
  t('Mae Rim'),
  t('Samoeng'),
  t('Fang'),
  t('Mae Ai'),
  t('Phrao'),
  t('San Pa Tong'),
  t('San Kamphaeng'),
  t('San Sai'),
  t('Hang Dong'),
  t('Hot'),
  t('Doi Tao'),
  t('Omkoi'),
  t('Saraphi'),
  t('Wiang Haeng'),
  t('Chai Prakan'),
  t('Mae Wang'),
  t('Mae On'),
  t('Doi Lo'),
  t('Tet Saban Nakorn Chiangmai(Kan lawi la)*'),
  t('Tet Saban Nakorn Chiangmai(Sri Wi)*'),
  t('Tet Saban Nakorn Chiangmai(Meng Rai)*'),
      );
} elseif ($address['locality'] == 39) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Lamphun'),
  t('Mae Tha'),
  t('Ban Hong'),
  t('Li'),
  t('Thung Hua Chang'),
  t('Pa Sang'),
  t('Ban Thi'),
  t('Wiang Nong Long'),
      );
} elseif ($address['locality'] == 40) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Lampang'),
  t('Mae Mo'),
  t('Ko Kha'),
  t('Soem Ngam'),
  t('Ngao'),
  t('Chae Hom'),
  t('Wang Nuea'),
  t('Thoen'),
  t('Mae Phrik'),
  t('Mae Tha'),
  t('Sop Prap'),
  t('Hang Chat'),
  t('Mueang Pan'),
      );
} elseif ($address['locality'] == 41) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Uttaradit'),
  t('Tron'),
  t('Tha Pla'),
  t('Nam Pat'),
  t('Fak Tha'),
  t('Ban Khok'),
  t('Phichai'),
  t('Laplae'),
  t('Thong Saen Khan'),
      );
} elseif ($address['locality'] == 42) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Phrae'),
  t('Rong Kwang'),
  t('Long'),
  t('Sung Men'),
  t('Den Chai'),
  t('Song'),
  t('Wang Chin'),
  t('Nong Muang Khai'),
      );
} elseif ($address['locality'] == 43) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Nan'),
  t('Mae Charim'),
  t('Ban Luang'),
  t('Na Noi'),
  t('Pua'),
  t('Tha Wang Pha'),
  t('Wiang Sa'),
  t('Thung Chang'),
  t('Chiang Klang'),
  t('Na Muen'),
  t('Santi Suk'),
  t('Bo Kluea'),
  t('Song Khwae'),
  t('Phu Phiang'),
  t('Chaloem Phra Kiat'),
      );
} elseif ($address['locality'] == 44) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Phayao'),
  t('Chun'),
  t('Chiang Kham'),
  t('Chiang Muan'),
  t('Dok Khamtai'),
  t('Pong'),
  t('Mae Chai'),
  t('Phu Sang'),
  t('Phu Kamyao'),
      );
} elseif ($address['locality'] == 45) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Chiang Rai'),
  t('Wiang Chai'),
  t('Chiang Khong'),
  t('Thoeng'),
  t('Phan'),
  t('Pa Daet'),
  t('Mae Chan'),
  t('Chiang Saen'),
  t('Mae Sai'),
  t('Mae Suai'),
  t('Wiang Pa Pao'),
  t('Phaya Mengrai'),
  t('Wiang Kaen'),
  t('Khun Tan'),
  t('Mae Fa Luang'),
  t('Mae Lao'),
  t('Wiang Chiang Rung'),
  t('Doi Luang'),
      );
} elseif ($address['locality'] == 46) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Mae Hong Son'),
  t('Khun Yuam'),
  t('Pai'),
  t('Mae Sariang'),
  t('Mae La Noi'),
  t('Sop Moei'),
  t('Pang Mapha'),
  t('Muen Tor'),
      );
} elseif ($address['locality'] == 47) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Nakhon Sawan'),
  t('Krok Phra'),
  t('Chum Saeng'),
  t('Nong Bua'),
  t('Banphot Phisai'),
  t('Kao Liao'),
  t('Takhli'),
  t('Takhli'),
  t('Phaisali'),
  t('Phayuha Khiri'),
  t('Phayuha Khiri'),
  t('Tak Fa'),
  t('Mae Wong'),
  t('Mae Poen'),
  t('Chum Ta Bong'),
  t('Huen Nam Hom'),
  t('Chum Ta Bong'),
  t('Mea Ley'),
      );
} elseif ($address['locality'] == 48) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Uthai Thani'),
  t('Thap Than'),
  t('Sawang Arom'),
  t('Nong Chang'),
  t('Nong Khayang'),
  t('Ban Rai'),
  t('Lan Sak'),
  t('Huai Khot'),
      );
} elseif ($address['locality'] == 49) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Kamphaeng Phet'),
  t('Sai Ngam'),
  t('Khlong Lan'),
  t('Khanu Woralaksaburi'),
  t('Khlong Khlung'),
  t('Phran Kratai'),
  t('Lan Krabue'),
  t('Sai Thong Watthana'),
  t('Pang Sila Thong'),
  t('Bueng Samakkhi'),
  t('Kosamphi Nakhon'),
      );
} elseif ($address['locality'] == 50) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Tak'),
  t('Ban Tak'),
  t('Sam Ngao'),
  t('Mae Ramat'),
  t('Tha Song Yang'),
  t('Mae Sot'),
  t('Phop Phra'),
  t('Umphang'),
  t('Wang Chao'),
  t('*King Ta Pui'),
      );
} elseif ($address['locality'] == 51) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Sukhothai'),
  t('Ban Dan Lan Hoi'),
  t('Khiri Mat'),
  t('Kong Krailat'),
  t('Si Satchanalai'),
  t('Si Samrong'),
  t('Sawankhalok'),
  t('Si Nakhon'),
  t('Thung Saliam'),
      );
} elseif ($address['locality'] == 52) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Phitsanulok'),
  t('Nakhon Thai'),
  t('Chat Trakan'),
  t('Bang Rakam'),
  t('Bang Krathum'),
  t('Phrom Phiram'),
  t('Wat Bot'),
  t('Wang Thong'),
  t('Noen Maprang'),
      );
} elseif ($address['locality'] == 53) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Phichit'),
  t('Wang Sai Phun'),
  t('Pho Prathap Chang'),
  t('Taphan Hin'),
  t('Bang Mun Nak'),
  t('Pho Thale'),
  t('Sam Ngam'),
  t('Tap Khlo'),
  t('Sak Lek'),
  t('Bueng Na Rang'),
  t('Dong Charoen'),
  t('Wachirabarami'),
      );
} elseif ($address['locality'] == 54) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Phetchabun'),
  t('Chon Daen'),
  t('Lom Sak'),
  t('Lom Kao'),
  t('Wichian Buri'),
  t('Si Thep'),
  t('Nong Phai'),
  t('Bueng Sam Phan'),
  t('Nam Nao'),
  t('Wang Pong'),
  t('Khao Kho'),
      );
} elseif ($address['locality'] == 55) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Ratchaburi'),
  t('Chom Bueng'),
  t('Suan Phueng'),
  t('Damnoen Saduak'),
  t('Ban Pong'),
  t('Bang Phae'),
  t('Photharam'),
  t('Pak Tho'),
  t('Wat Phleng'),
  t('Ban Kha'),
  t('Tet Saban Ban Kong'),
      );
} elseif ($address['locality'] == 56) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Kanchanaburi'),
  t('Sai Yok'),
  t('Bo Phloi'),
  t('Si Sawat'),
  t('Tha Maka'),
  t('Tha Muang'),
  t('Pha Phum'),
  t('Sangkhla Buri'),
  t('Phanom Thuan'),
  t('Lao Khwan'),
  t('Dan Makham Tia'),
  t('Nong Prue'),
  t('Huai Krachao'),
  t('Tha Kra Dan'),
  t('*Ban Tuan'),
      );
} elseif ($address['locality'] == 57) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Suphan Buri'),
  t('Doem Bang Nang Buat'),
  t('Dan Chang'),
  t('Bang Pla Ma'),
  t('Si Prachan'),
  t('Don Chedi'),
  t('Song Phi Nong'),
  t('Sam Chuk'),
  t('U Thong'),
  t('Nong Ya Sai'),
      );
} elseif ($address['locality'] == 58) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Nakhon Pathom'),
  t('Kamphaeng Saen'),
  t('Nakhon Chai Si'),
  t('Don Tum'),
  t('Bang Len'),
  t('Sam Phran'),
  t('Phutthamonthon'),
      );
} elseif ($address['locality'] == 59) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Samut Sakhon'),
  t('Krathum Baen'),
  t('Ban Phaeo'),
      );
} elseif ($address['locality'] == 60) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Samut Songkhram'),
  t('Bang Khonthi'),
  t('Amphawa'),
      );
} elseif ($address['locality'] == 61) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Phetchaburi'),
  t('Khao Yoi'),
  t('Nong Ya Plong'),
  t('Cha-am'),
  t('Tha Yang'),
  t('Ban Lat'),
  t('Ban Laem'),
  t('Kaeng Krachan'),
      );
} elseif ($address['locality'] == 62) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Prachuap Khiri Khan'),
  t('Kui Buri'),
  t('Thap Sakae'),
  t('Bang Saphan'),
  t('Bang Saphan Noi'),
  t('Pran Buri'),
  t('Hua Hin'),
  t('Sam Roi Yot'),
      );
} elseif ($address['locality'] == 63) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Nakhon Si Thammarat'),
  t('Phrom Khiri'),
  t('Lan Saka'),
  t('Chawang'),
  t('Phipun'),
  t('Chian Yai'),
  t('Cha-uat'),
  t('Tha Sala'),
  t('Thung Song'),
  t('Na Bon'),
  t('Thung Yai'),
  t('Pak Phanang'),
  t('Ron Phibun'),
  t('Sichon'),
  t('Khanom'),
  t('Hua Sai'),
  t('Bang Khan'),
  t('Tham Phannara'),
  t('Chulabhorn'),
  t('Phra Phrom'),
  t('Nopphitam'),
  t('Chang Klang'),
  t('Chaloem Phra Kiat'),
  t('Chian Yai*'),
  t('Suan Luang'),
  t('Ron Phibun'),
  t('Hua Sai'),
  t('Thung Song'),
      );
} elseif ($address['locality'] == 64) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Krabi'),
  t('Khao Phanom'),
  t('Ko Lanta'),
  t('Khlong Thom'),
  t('Ao Luek'),
  t('Plai Phraya'),
  t('Lam Thap'),
  t('Nuea Khlong'),
      );
} elseif ($address['locality'] == 65) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Phang-nga'),
  t('Ko Yao'),
  t('Kapong'),
  t('Takua Thung'),
  t('Takua Pa'),
  t('Khura Buri'),
  t('Thap Put'),
  t('Thai Mueang'),
      );
} elseif ($address['locality'] == 66) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Phuket'),
  t('Kathu'),
  t('Thalang'),
  t('*Tung Ka'),
      );
} elseif ($address['locality'] == 67) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Surat Thani'),
  t('Kanchanadit'),
  t('Don Sak'),
  t('Ko Samui'),
  t('Ko Pha-ngan'),
  t('Chaiya'),
  t('Tha Chana'),
  t('Khiri Rat Nikhom'),
  t('Ban Ta Khun'),
  t('Phanom'),
  t('Tha Chang'),
  t('Ban Na San'),
  t('Ban Na Doem'),
  t('Khian Sa'),
  t('Wiang Sa'),
  t('Phrasaeng'),
  t('Phunphin'),
  t('Chai Buri'),
  t('Vibhavadi'),
  t('Ko Pha-ngan'),
  t('*Ban Don'),
      );
} elseif ($address['locality'] == 68) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Ranong'),
  t('La-un'),
  t('Kapoe'),
  t('Kra Buri'),
  t('Suk Samran'),
      );
} elseif ($address['locality'] == 69) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Chumphon'),
  t('Tha Sae'),
  t('Pathio'),
  t('Lang Suan'),
  t('Lamae'),
  t('Phato'),
  t('Sawi'),
  t('Thung Tako'),
      );
} elseif ($address['locality'] == 70) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Songkhla'),
  t('Sathing Phra'),
  t('Chana'),
  t('Na Thawi'),
  t('Thepha'),
  t('Saba Yoi'),
  t('Ranot'),
  t('Krasae Sin'),
  t('Rattaphum'),
  t('Sadao'),
  t('Hat Yai'),
  t('Na Mom'),
  t('Khuan Niang'),
  t('Bang Klam'),
  t('Singhanakhon'),
  t('Khlong Hoi Khong'),
  t('Sum Nung Kam'),
  t('Ban Pru*'),
      );
} elseif ($address['locality'] == 71) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Satun'),
  t('Khuan Don'),
  t('Khuan Kalong'),
  t('Tha Phae'),
  t('La-ngu'),
  t('Thung Wa'),
  t('Manang'),
      );
} elseif ($address['locality'] == 72) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Trang'),
  t('Kantang'),
  t('Yan Ta Khao'),
  t('Palian'),
  t('Sikao'),
  t('Huai Yot'),
  t('Wang Wiset'),
  t('Na Yong'),
  t('Ratsada'),
  t('Hat Samran'),
  t('Mueang Trang(Krong Teng)**'),
      );
} elseif ($address['locality'] == 73) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Phatthalung'),
  t('Kong Ra'),
  t('Khao Chaison'),
  t('Tamot'),
  t('Khuan Khanun'),
  t('Pak Phayun'),
  t('Si Banphot'),
  t('Pa Bon'),
  t('Bang Kaeo'),
  t('Pa Phayom'),
  t('Srinagarindra'),
      );
} elseif ($address['locality'] == 74) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Pattani'),
  t('Khok Pho'),
  t('Nong Chik'),
  t('Panare'),
  t('Mayo'),
  t('Thung Yang Daeng'),
  t('Sai Buri'),
  t('Mai Kaen'),
  t('Yaring'),
  t('Yarang'),
  t('Kapho'),
  t('Mae Lan'),
      );
} elseif ($address['locality'] == 75) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Yala'),
  t('Betong'),
  t('Bannang Sata'),
  t('Than To'),
  t('Yaha'),
  t('Raman'),
  t('Kabang'),
  t('Krong Pinang'),
      );
} elseif ($address['locality'] == 76) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Narathiwat'),
  t('Tak Bai'),
  t('Bacho'),
  t('Yi-ngo'),
  t('Ra-ngae'),
  t('Rueso'),
  t('Si Sakhon'),
  t('Waeng'),
  t('Sukhirin'),
  t('Su-ngai Kolok'),
  t('Su-ngai Padi'),
  t('Chanae'),
  t('Cho-airong'),
  t('*Bang Nra'),
      );
} elseif ($address['locality'] == 77) {
        $format['locality_block']['dependent_locality']['#options'] = array(
  t('Mueang Bueng Kan'),
  t('Phon Charoen'),
  t('So Phisai'),
  t('Seka'),
  t('Pak Khat'),
  t('Bueng Khong Long'),
  t('Si Wilai'),
  t('Bung Khla'),
      );

  }
    
  }
  // Format render
  if ($context['mode'] == 'render') {
    $format['locality_block']['dependent_locality']['#weight'] = 1;
    $format['locality_block']['locality']['#weight'] = 2;
    $format['locality_block']['postal_code']['#weight'] = 3;
    $format['locality_block']['postal_code']['#prefix'] = ' ';
  }
  // Check ajax form in Viet Nam
  if ($context['mode'] == 'form' && $address['country'] == 'TH') {
    $format['locality_block']['locality']['#ajax'] = array(
      'callback' => 'addressfield_standard_widget_refresh',
      'wrapper' => $format['#wrapper_id'],
      'method' => 'replace',
    );
  } else {
    if (isset($format['locality_block']['locality'])) {
      $format['locality_block']['locality']['#ajax'] = array();
    }
  }
}

/**
 * The list city/province in Viet Nam.
 */
function _addressfield_th_city_list() {
  // Using http://adslvnpt.com/dien-thoai-co-dinh-va-gphone/huong-dan-su-dung/bang-ma-vung
  $data = array(
    '' => t('--'),
    1 => t('Bangkok'),
    2 => t('Samut Prakan'),
    3 => t('Nonthaburi'),
    4 => t('Pathum Thani'),
    5 => t('Phra Nakhon Si Ayutthaya'),
    6 => t('Ang Thong'),
    7 => t('Loburi'),
    8 => t('Sing Buri'),
    9 => t('Chai Nat'),
    10 => t('Saraburi'),
    11 => t('Chon Buri'),
    12 => t('Rayong'),
    13 => t('Chanthaburi'),
    14 => t('Trat'),
    15 => t('Chachoengsao'),
    16 => t('Prachin Buri'),
    17 => t('Nakhon Nayok'),
    18 => t('Sa Kaeo'),
    19 => t('Nakhon Ratchasima'),
    20 => t('Buri Ram'),
    21 => t('Surin'),
    22 => t('Si Sa Ket'),
    23 => t('Ubon Ratchathani'),
    24 => t('Yasothon'),
    25 => t('Chaiyaphum'),
    26 => t('Amnat Charoen'),
    27 => t('Nong Bua Lam Phu'),
    28 => t('Khon Kaen'),
    29 => t('Udon Thani'),
    30 => t('Loei'),
    31 => t('Nong Khai'),
    32 => t('Maha Sarakham'),
    33 => t('Roi Et'),
    34 => t('Kalasin'),
    35 => t('Sakon Nakhon'),
    36 => t('Nakhon Phanom'),
    37 => t('Mukdahan'),
    38 => t('Chiang Mai'),
    39 => t('Lamphun'),
    40 => t('Lampang'),
    41 => t('Uttaradit'),
    42 => t('Phrae'),
    43 => t('Nan'),
    44 => t('Phayao'),
    45 => t('Chiang Rai'),
    46 => t('Mae Hong Son'),
    47 => t('Nakhon Sawan'),
    48 => t('Uthai Thani'),
    49 => t('Kamphaeng Phet'),
    50 => t('Tak'),
    51 => t('Sukhothai'),
    52 => t('Phitsanulok'),
    53 => t('Phichit'),
    54 => t('Phetchabun'),
    55 => t('Ratchaburi'),
    56 => t('Kanchanaburi'),
    57 => t('Suphan Buri'),
    58 => t('Nakhon Pathom'),
    59 => t('Samut Sakhon'),
    60 => t('Samut Songkhram'),
    61 => t('Phetchaburi'),
    62 => t('Prachuap Khiri Khan'),
    63 => t('Nakhon Si Thammarat'),
    64 => t('Krabi'),
    65 => t('Phangnga'),
    66 => t('Phuket'),
    67 => t('Surat Thani'),
    68 => t('Ranong'),
    69 => t('Chumphon'),
    70 => t('Songkhla'),
    71 => t('Satun'),
    72 => t('Trang'),
    73 => t('Phatthalung'),
    74 => t('Pattani'),
    75 => t('Yala'),
    76 => t('Narathiwat'),
    77 => t('Buogkan')
  );

  return $data;
}
