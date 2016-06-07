<?php
/**
 * @file
 * realtor_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function realtor_user_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|user|user|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_phone',
      1 => 'field_fax',
      2 => 'field_cell',
      3 => 'field_tollfree',
      4 => 'field_website',
      5 => 'field_email',
      6 => 'field_oip_web_host',
      7 => 'field_mls_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_id|user|user|form';
  $field_group->group_name = 'group_id';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indentification',
    'weight' => '6',
    'children' => array(
      0 => 'field_designations',
      1 => 'field_firstname',
      2 => 'field_name_suffix',
      3 => 'field_title',
      4 => 'field_middlename',
      5 => 'field_lastname',
      6 => 'field_company_name',
      7 => 'field_offid',
      8 => 'field_agency',
      9 => '_add_existing_field',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-id field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_id|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional|user|user|form';
  $field_group->group_name = 'group_professional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Professional',
    'weight' => '9',
    'children' => array(
      0 => 'field_licensed',
      1 => 'field_license',
      2 => 'field_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-professional field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_professional|user|user|form'] = $field_group;

  return $export;
}
