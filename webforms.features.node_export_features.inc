<?php
/**
 * @file
 * webforms.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function webforms_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Bug Reporting\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ad42f1ce-017c-47ac-9dc8-455039dbaeb0\',
      \'nid\' => \'1\',
      \'type\' => \'webform\',
      \'language\' => \'und\',
      \'created\' => \'1436794364\',
      \'changed\' => \'1436800217\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'02021ece-35ab-4136-b7d0-8410b3a90b63\',
      \'revision_timestamp\' => \'1436800217\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Bug Reporting\',
            \'format\' => NULL,
            \'safe_value\' => \'Bug Reporting\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'title_original\' => \'Bug Reporting\',
      \'entity_translation_handler_id\' => \'node-eid-1-1\',
      \'webform\' => array(
        \'nid\' => \'1\',
        \'next_serial\' => \'1\',
        \'confirmation\' => \'\',
        \'confirmation_format\' => NULL,
        \'redirect_url\' => \'<confirmation>\',
        \'status\' => \'1\',
        \'block\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'1\',
        \'confidential\' => \'0\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'progressbar_bar\' => \'1\',
        \'progressbar_page_number\' => \'0\',
        \'progressbar_percent\' => \'0\',
        \'progressbar_pagebreak_labels\' => \'1\',
        \'progressbar_include_confirmation\' => \'1\',
        \'progressbar_label_first\' => \'Start\',
        \'progressbar_label_confirmation\' => \'Complete\',
        \'preview\' => \'0\',
        \'preview_next_button_label\' => \'\',
        \'preview_prev_button_label\' => \'\',
        \'preview_title\' => \'\',
        \'preview_message\' => \'\',
        \'preview_message_format\' => NULL,
        \'preview_excluded_components\' => array(),
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(),
        \'components\' => array(
          1 => array(
            \'nid\' => 1,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'name\',
            \'name\' => \'Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'description\' => \'Provide your full name, as registered on the CWRC website.\',
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'0\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 1,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'email\',
            \'name\' => \'Email Address\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'description\' => \'Provide the email address you would like to be contacted at regarding this bug report / feature request.\',
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'multiple\' => 0,
              \'format\' => \'short\',
              \'width\' => \'\',
              \'unique\' => 0,
              \'disabled\' => 0,
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 1,
            \'cid\' => \'3\',
            \'pid\' => \'0\',
            \'form_key\' => \'project_affiliation\',
            \'name\' => \'Project Affiliation\',
            \'type\' => \'select\',
            \'value\' => \'\',
            \'extra\' => array(
              \'description\' => \'Please specify your role or project within CWRC\',
              \'items\' => "1|Authenticated user (no project affiliation)\\r\\n2|Guest user\\r\\n3|DHSI 2014 course participant\\r\\n4|After Rain\\r\\n5|BIBLIFO\\r\\n6|Biographies of Canadian Women Playwrights\\r\\n7|Cabaret Commons\\r\\n8|Canada and the Spanish Civil War Project\\r\\n9|Canada\'s Early Women Writers Project\\r\\n10|Canadian Women\'s Pulp SF: 1900-1980\\r\\n11|Early Canadian Cultural Journal Index - Periodicals Whole\\r\\n12|English-Canadian Women\'s Poetry to 1867\\r\\n13|Magazines, Travel and Middlebrow Culture in Canada 1925-1960\\r\\n14|Metafeminisme\\r\\n15|Paper Speaking\\r\\n16|Orlando\\r\\n17|Winnifred Eaton Collection\\r\\n18|Women and Words",
              \'other_option\' => 0,
              \'multiple\' => 0,
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'aslist\' => 1,
              \'empty_option\' => \'\',
              \'optrand\' => 0,
              \'other_text\' => \'Other...\',
              \'custom_keys\' => FALSE,
              \'options_source\' => \'\',
              \'analysis\' => TRUE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 1,
            \'cid\' => \'4\',
            \'pid\' => \'0\',
            \'form_key\' => \'product\',
            \'name\' => \'Product\',
            \'type\' => \'select\',
            \'value\' => \'\',
            \'extra\' => array(
              \'description\' => \'Specify the portion of the CWRC research space you would like to see fixed/improved.\',
              \'items\' => "1|Repository\\r\\n2|CWRCWriter\\r\\n3|Plot-It\\r\\n4|Voyant",
              \'other_option\' => 1,
              \'other_text\' => \'Other\',
              \'multiple\' => 0,
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'aslist\' => 0,
              \'empty_option\' => \'\',
              \'optrand\' => 0,
              \'custom_keys\' => FALSE,
              \'options_source\' => \'\',
              \'analysis\' => TRUE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'3\',
            \'page_num\' => 1,
          ),
          5 => array(
            \'nid\' => 1,
            \'cid\' => \'5\',
            \'pid\' => \'0\',
            \'form_key\' => \'your_operation_system\',
            \'name\' => \'Your Operation System\',
            \'type\' => \'select\',
            \'value\' => \'\',
            \'extra\' => array(
              \'items\' => "1|Linux\\r\\n2|Mac-based\\r\\n3|Windows",
              \'other_option\' => 1,
              \'other_text\' => \'Other\',
              \'multiple\' => 0,
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'aslist\' => 0,
              \'empty_option\' => \'\',
              \'optrand\' => 0,
              \'description\' => \'\',
              \'custom_keys\' => FALSE,
              \'options_source\' => \'\',
              \'analysis\' => TRUE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'4\',
            \'page_num\' => 1,
          ),
          6 => array(
            \'nid\' => 1,
            \'cid\' => \'6\',
            \'pid\' => \'0\',
            \'form_key\' => \'your_browser\',
            \'name\' => \'Your Browser\',
            \'type\' => \'select\',
            \'value\' => \'\',
            \'extra\' => array(
              \'items\' => "1|Google Chrome\\r\\n2|Microsoft Internet Explorer\\r\\n3|Mozilla Firefox\\r\\n4|Opera\\r\\n5|Safari",
              \'other_option\' => 1,
              \'other_text\' => \'Other\',
              \'multiple\' => 0,
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'aslist\' => 0,
              \'empty_option\' => \'\',
              \'optrand\' => 0,
              \'description\' => \'\',
              \'custom_keys\' => FALSE,
              \'options_source\' => \'\',
              \'analysis\' => TRUE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'5\',
            \'page_num\' => 1,
          ),
          9 => array(
            \'nid\' => 1,
            \'cid\' => \'9\',
            \'pid\' => \'0\',
            \'form_key\' => \'brief_problem_description\',
            \'name\' => \'Brief Problem Description\',
            \'type\' => \'textarea\',
            \'value\' => "List Steps to Reproduce the Bug: \\r\\n1. \\r\\n2. \\r\\n3. \\r\\nResults:\\r\\n Expected results:",
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'resizable\' => 0,
              \'cols\' => \'\',
              \'rows\' => \'\',
              \'disabled\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'8\',
            \'page_num\' => 1,
          ),
          10 => array(
            \'nid\' => 1,
            \'cid\' => \'10\',
            \'pid\' => \'0\',
            \'form_key\' => \'please_provide_the_url_of_the_page_where_you_detected_the_bug\',
            \'name\' => \'Please Provide the URL of the Page Where you Detected the Bug\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'9\',
            \'page_num\' => 1,
          ),
          11 => array(
            \'nid\' => 1,
            \'cid\' => \'11\',
            \'pid\' => \'0\',
            \'form_key\' => \'report_your_bug_here\',
            \'name\' => \'Report Your Bug Here \',
            \'type\' => \'textarea\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'resizable\' => 0,
              \'cols\' => \'\',
              \'rows\' => \'\',
              \'disabled\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'10\',
            \'page_num\' => 1,
          ),
        ),
        \'conditionals\' => array(),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1436794364\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Feature Request\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ee2f878a-aaf3-4dc7-afec-b409eb039747\',
      \'nid\' => \'2\',
      \'type\' => \'webform\',
      \'language\' => \'en\',
      \'created\' => \'1436800519\',
      \'changed\' => \'1436800519\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a02107c8-9157-40f7-a64a-331ff750c117\',
      \'revision_timestamp\' => \'1436800519\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Feature Request\',
            \'format\' => NULL,
            \'safe_value\' => \'Feature Request\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'title_original\' => \'Feature Request\',
      \'entity_translation_handler_id\' => \'node-eid-2-2\',
      \'webform\' => array(
        \'nid\' => \'2\',
        \'next_serial\' => \'1\',
        \'confirmation\' => \'\',
        \'confirmation_format\' => NULL,
        \'redirect_url\' => \'<confirmation>\',
        \'status\' => \'1\',
        \'block\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'1\',
        \'confidential\' => \'0\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'progressbar_bar\' => \'1\',
        \'progressbar_page_number\' => \'0\',
        \'progressbar_percent\' => \'0\',
        \'progressbar_pagebreak_labels\' => \'1\',
        \'progressbar_include_confirmation\' => \'1\',
        \'progressbar_label_first\' => \'Start\',
        \'progressbar_label_confirmation\' => \'Complete\',
        \'preview\' => \'0\',
        \'preview_next_button_label\' => \'\',
        \'preview_prev_button_label\' => \'\',
        \'preview_title\' => \'\',
        \'preview_message\' => \'\',
        \'preview_message_format\' => NULL,
        \'preview_excluded_components\' => array(),
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(),
        \'components\' => array(
          1 => array(
            \'nid\' => 2,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'name\',
            \'name\' => \'Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'description\' => \'Provide your full name, as registered on the CWRC website. \',
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'0\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 2,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'email_address\',
            \'name\' => \'Email Address\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'description\' => \'Provide the email address you would like to be contacted at regarding this bug report / feature request.\',
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'multiple\' => 0,
              \'format\' => \'short\',
              \'width\' => \'\',
              \'unique\' => 0,
              \'disabled\' => 0,
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 2,
            \'cid\' => \'3\',
            \'pid\' => \'0\',
            \'form_key\' => \'project_affiliation\',
            \'name\' => \'Project Affiliation\',
            \'type\' => \'select\',
            \'value\' => \'\',
            \'extra\' => array(
              \'description\' => \'Please specify your role or project within CWRC\',
              \'items\' => "1|Authenticated user (no project affiliation)\\r\\n2|Guest user\\r\\n3|DHSI 2014 course participant\\r\\n4|After Rain\\r\\n5|BIBLIFO\\r\\n6|Biographies of Canadian Women Playwrights\\r\\n7|Cabaret Commons\\r\\n8|Canada and the Spanish Civil War Project\\r\\n9|Canada\'s Early Women Writers Project\\r\\n10|Canadian Women\'s Pulp SF: 1900-1980\\r\\n11|Early Canadian Cultural Journal Index - Periodicals Whole\\r\\n12|English-Canadian Women\'s Poetry to 1867\\r\\n13|Magazines, Travel and Middlebrow Culture in Canada 1925-1960\\r\\n14|Metafeminisme\\r\\n15|Paper Speaking\\r\\n16|Orlando\\r\\n17|Winnifred Eaton Collection\\r\\n18|Women and Words",
              \'other_option\' => 0,
              \'multiple\' => 0,
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'aslist\' => 1,
              \'empty_option\' => \'\',
              \'optrand\' => 0,
              \'other_text\' => \'Other...\',
              \'custom_keys\' => FALSE,
              \'options_source\' => \'\',
              \'analysis\' => TRUE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 2,
            \'cid\' => \'4\',
            \'pid\' => \'0\',
            \'form_key\' => \'product\',
            \'name\' => \'Product\',
            \'type\' => \'select\',
            \'value\' => \'\',
            \'extra\' => array(
              \'description\' => \'Specify the portion of the CWRC research space you would like to see fixed/improved.\',
              \'items\' => "1|Repository\\r\\n2|CWRCWriter\\r\\n3|Plot-It\\r\\n4|Voyant",
              \'other_option\' => 1,
              \'other_text\' => \'Other\',
              \'multiple\' => 0,
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'aslist\' => 0,
              \'empty_option\' => \'\',
              \'optrand\' => 0,
              \'custom_keys\' => FALSE,
              \'options_source\' => \'\',
              \'analysis\' => TRUE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'3\',
            \'page_num\' => 1,
          ),
          5 => array(
            \'nid\' => 2,
            \'cid\' => \'5\',
            \'pid\' => \'0\',
            \'form_key\' => \'your_operation_system\',
            \'name\' => \'Your Operation System\',
            \'type\' => \'select\',
            \'value\' => \'\',
            \'extra\' => array(
              \'items\' => "1|Linux\\r\\n2|Mac-based\\r\\n3|Windows",
              \'other_option\' => 1,
              \'other_text\' => \'Other\',
              \'multiple\' => 0,
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'aslist\' => 0,
              \'empty_option\' => \'\',
              \'optrand\' => 0,
              \'description\' => \'\',
              \'custom_keys\' => FALSE,
              \'options_source\' => \'\',
              \'analysis\' => TRUE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'4\',
            \'page_num\' => 1,
          ),
          6 => array(
            \'nid\' => 2,
            \'cid\' => \'6\',
            \'pid\' => \'0\',
            \'form_key\' => \'your_browser\',
            \'name\' => \'Your Browser\',
            \'type\' => \'select\',
            \'value\' => \'\',
            \'extra\' => array(
              \'items\' => "1|Google Chrome\\r\\n2|Microsoft Internet Explorer\\r\\n3|Mozilla Firefox\\r\\n4|Opera\\r\\n5|Safari",
              \'other_option\' => 1,
              \'other_text\' => \'Other\',
              \'multiple\' => 0,
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'aslist\' => 0,
              \'empty_option\' => \'\',
              \'optrand\' => 0,
              \'description\' => \'\',
              \'custom_keys\' => FALSE,
              \'options_source\' => \'\',
              \'analysis\' => TRUE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'5\',
            \'page_num\' => 1,
          ),
          7 => array(
            \'nid\' => 2,
            \'cid\' => \'7\',
            \'pid\' => \'0\',
            \'form_key\' => \'title_of_feature\',
            \'name\' => \'Title of Feature\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'description\' => \'Please provide a title for your requested feature\',
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'6\',
            \'page_num\' => 1,
          ),
          8 => array(
            \'nid\' => 2,
            \'cid\' => \'8\',
            \'pid\' => \'0\',
            \'form_key\' => \'describe_how_the_feature_should_work\',
            \'name\' => \'Describe how the Feature Should Work\',
            \'type\' => \'textarea\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'resizable\' => 0,
              \'cols\' => \'\',
              \'rows\' => \'\',
              \'disabled\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'7\',
            \'page_num\' => 1,
          ),
          9 => array(
            \'nid\' => 2,
            \'cid\' => \'9\',
            \'pid\' => \'0\',
            \'form_key\' => \'why_is_this_feature_important_to_you\',
            \'name\' => \'Why is this Feature Important to You?\',
            \'type\' => \'textarea\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'resizable\' => 0,
              \'cols\' => \'\',
              \'rows\' => \'\',
              \'disabled\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'8\',
            \'page_num\' => 1,
          ),
        ),
        \'conditionals\' => array(),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1436800519\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
