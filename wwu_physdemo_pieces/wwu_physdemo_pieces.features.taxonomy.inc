<?php
/**
 * @file
 * wwu_physdemo_pieces.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wwu_physdemo_pieces_taxonomy_default_vocabularies() {
  return array(
    'demonstration_equipment' => array(
      'name' => 'Demonstration Equipment',
      'machine_name' => 'demonstration_equipment',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
