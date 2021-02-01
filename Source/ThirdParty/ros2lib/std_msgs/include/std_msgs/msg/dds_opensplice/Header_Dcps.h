#ifndef _H_39C85EC7C55BCE2E8027E04F3ABB4668_Header_DCPS_H_
#define _H_39C85EC7C55BCE2E8027E04F3ABB4668_Header_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Header_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Header_TypeSupportInterface;

            typedef Header_TypeSupportInterface * Header_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Header_TypeSupportInterface> Header_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Header_TypeSupportInterface> Header_TypeSupportInterface_out;


            class Header_DataWriter;

            typedef Header_DataWriter * Header_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Header_DataWriter> Header_DataWriter_var;
            typedef DDS_DCPSInterface_out < Header_DataWriter> Header_DataWriter_out;


            class Header_DataReader;

            typedef Header_DataReader * Header_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Header_DataReader> Header_DataReader_var;
            typedef DDS_DCPSInterface_out < Header_DataReader> Header_DataReader_out;


            class Header_DataReaderView;

            typedef Header_DataReaderView * Header_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Header_DataReaderView> Header_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Header_DataReaderView> Header_DataReaderView_out;

            struct Header_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Header_, struct Header_Seq_uniq_> Header_Seq;
            typedef DDS_DCPSSequence_var < Header_Seq> Header_Seq_var;
            typedef DDS_DCPSSequence_out < Header_Seq> Header_Seq_out;

            class  Header_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Header_TypeSupportInterface_ptr _ptr_type;
                typedef Header_TypeSupportInterface_var _var_type;

                static Header_TypeSupportInterface_ptr _duplicate (Header_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Header_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Header_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Header_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Header_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Header_TypeSupportInterface () {};
                ~Header_TypeSupportInterface () {};
            private:
                Header_TypeSupportInterface (const Header_TypeSupportInterface &);
                Header_TypeSupportInterface & operator = (const Header_TypeSupportInterface &);
            };

            class  Header_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Header_DataWriter_ptr _ptr_type;
                typedef Header_DataWriter_var _var_type;

                static Header_DataWriter_ptr _duplicate (Header_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Header_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Header_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Header_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Header_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Header_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Header_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Header_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Header_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Header_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Header_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Header_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Header_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Header_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Header_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Header_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Header_& instance_data) = 0;

            protected:
                Header_DataWriter () {};
                ~Header_DataWriter () {};
            private:
                Header_DataWriter (const Header_DataWriter &);
                Header_DataWriter & operator = (const Header_DataWriter &);
            };

            class  Header_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Header_DataReader_ptr _ptr_type;
                typedef Header_DataReader_var _var_type;

                static Header_DataReader_ptr _duplicate (Header_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Header_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Header_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Header_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Header_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Header_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Header_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Header_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Header_& instance) = 0;

            protected:
                Header_DataReader () {};
                ~Header_DataReader () {};
            private:
                Header_DataReader (const Header_DataReader &);
                Header_DataReader & operator = (const Header_DataReader &);
            };

            class  Header_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Header_DataReaderView_ptr _ptr_type;
                typedef Header_DataReaderView_var _var_type;

                static Header_DataReaderView_ptr _duplicate (Header_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Header_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Header_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Header_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Header_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Header_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Header_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Header_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Header_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Header_& instance) = 0;

            protected:
                Header_DataReaderView () {};
                ~Header_DataReaderView () {};
            private:
                Header_DataReaderView (const Header_DataReaderView &);
                Header_DataReaderView & operator = (const Header_DataReaderView &);
            };
        }

    }

}

#endif
